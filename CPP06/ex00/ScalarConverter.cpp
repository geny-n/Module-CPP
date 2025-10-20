/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:18:12 by ngeny             #+#    #+#             */
/*   Updated: 2025/06/05 14:21:41 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	std::cout << "ScalarConverter default constructor" << std::endl;
}

ScalarConverter::ScalarConverter( ScalarConverter const &copy)
{
	std::cout << "ScalarConverter copy constructor" << std::endl;
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& f)
{
	std::cout << "ScalarConverter copy assignment constructor called" << std::endl;
	(void)f;
	return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter destructor" << std::endl;
}

int check_input(std::string str)
{
	int i = 0;
	int count_f = 0;
	int count_c = 0;
	std::string pseudoL[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	
	while (i < 6)
	{
		if (str == pseudoL[i])
			return (0);
		i++;
	}
	if (str.length() == 1 && isgraph(str[0]))
		return (0);
	if (!(str[0] == '+' || str[0] == '-' || isdigit(str[0])))
	{
		std::cout << "error 1" << std::endl;
		return (1);
	}
	i = 1;
	while (str[i])
	{
		if (str[i] != 'f' && str[i] != '.' && !(isdigit(str[i])))
		{
			std::cout << "error 2" << std::endl;
			return (1);
		}
		if (str[i] == '.')
			count_c++;
		if (str[i] == 'f')
			count_f++;
		i++;
	}
	if (count_c > 1 || count_f > 1)
		return (1);
	return (0);
}

int which_input(std::string str)
{
	int i = 0;
	while (str[i])
	{
		if (str.length() > 1 && str[str.length() - 1] == 'f' && str.find('.') != std::string::npos)
			return (1);
		if (str.length() > 1 && str.find('.') != std::string::npos)
			return (2);
		if (str.length() == 1 && isgraph(str[i]) && !(isdigit(str[i]))) 
			return (3);
		if (isdigit(str[i]))
			return (4);
		i++;
	}
	return (5);
}

template <typename T, typename TT>
T returnValue(TT value, bool &success)
{
    success = true;
    std::stringstream s;
    s << value;

    long double temp;
    s >> temp;

    if (s.fail()) {
        success = false;
        return T();
    }

    long double min_val;
    long double max_val = static_cast<long double>(std::numeric_limits<T>::max());
    if (std::numeric_limits<T>::is_integer)
        min_val = static_cast<long double>(std::numeric_limits<T>::min());
    else
        min_val = -max_val;
    if (temp < min_val || temp > max_val) {
        success = false;
        return T();
    }
    return static_cast<T>(temp);
}

template <typename TT>
char convert_to_char(TT value)
{
    if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
        return 0;
    char c = static_cast<char>(value);
    if (std::isprint(static_cast<unsigned char>(c)))
        return c;
    else
        return 0;
}

void convert_char(std::string str)
{
	std::cout << "*** input type char : " << str << " ***" << std::endl;
	char c = str[0];
	if (c == 0)
	{
		std::cout << "char : Non displayable" << std::endl;
		std::cout << "int : impossible" <<std::endl;
		std::cout << "float : impossible" <<std::endl;
		std::cout << "double : impossible" <<std::endl;
		return;
	}
	int i = static_cast<int>(c);
	float f = static_cast<float>(c);
	double d = static_cast<double>(c);
	
	std::cout.setf(std::ios::fixed);
	std::cout.precision(1);
	std::cout << "char : '" << c << "'" << std::endl;
	std::cout << "int : " << i <<std::endl;
	std::cout << "float : " << f << "f" <<std::endl;
	std::cout << "double : " << d <<std::endl;
}

void convert_float(std::string str) {
	std::cout << "*** input type float : " << str << " ***" << std::endl;
	bool ok_double;
	bool ok_int;
	bool ok_float;
	float f = returnValue<float, std::string>(str, ok_float);
	if (!ok_float)
	{
		std::cout << "char : Non displayable" << std::endl;
		std::cout << "int : impossible" <<std::endl;
		std::cout << "float : impossible" <<std::endl;
		std::cout << "double : impossible" <<std::endl;
		return;
	}
	
	double d = returnValue<double, float>(f, ok_double);
	char c = convert_to_char(f);
	int i = returnValue<int, float>(f, ok_int);
	
	std::cout.setf(std::ios::fixed);
	std::cout.precision(1);
	if (c == 0)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << c << "'" << std::endl;
	if (!ok_int)
		std::cout << "int : impossible" <<std::endl;
	else
		std::cout << "int : " << i <<std::endl;
	if (!ok_float)
		std::cout << "float : impossible" <<std::endl;
	else
		std::cout << "float : " << f << "f" << std::endl;
	if (!ok_double)
		std::cout << "double : impossible" <<std::endl;
	else
		std::cout << "double : " << d <<std::endl;
}

void convert_double(std::string str)
{
    std::cout << "*** input type double : " << str << " ***" << std::endl;

    bool ok_double;
    bool ok_int;
    bool ok_float;
    double d = returnValue<double, std::string>(str, ok_double);
	if (!ok_double)
	{
		std::cout << "char : Non displayable" << std::endl;
		std::cout << "int : impossible" <<std::endl;
		std::cout << "float : impossible" <<std::endl;
		std::cout << "double : impossible" <<std::endl;
		return;
	}
	
    char c = convert_to_char(d);
    int i = returnValue<int, double>(d, ok_int);
    float f = returnValue<float, double>(d, ok_float);

    std::cout.setf(std::ios::fixed);
	std::cout.precision(1);
	if (c == 0)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << c << "'" << std::endl;
	if (!ok_int)
		std::cout << "int : impossible" <<std::endl;
	else
		std::cout << "int : " << i <<std::endl;
	if (!ok_float)
		std::cout << "float : impossible" <<std::endl;
	else
		std::cout << "float : " << f << "f" << std::endl;
	if (!ok_double)
		std::cout << "double : impossible" <<std::endl;
	else
		std::cout << "double : " << d <<std::endl;
}

void convert_int(std::string str)
{
	std::cout << "*** input type int : " << str << " ***" << std::endl;
	bool ok_double;
    bool ok_int;
    bool ok_float;
	int i = returnValue<int, std::string>(str, ok_int);
	if (!ok_int)
	{
		std::cout << "char : Non displayable" << std::endl;
		std::cout << "int : impossible" <<std::endl;
		std::cout << "float : impossible" <<std::endl;
		std::cout << "double : impossible" <<std::endl;
		return;
	}
	char c = convert_to_char(i);
	float f = returnValue<float, int>(i, ok_float);
	double d = returnValue<double, int>(i, ok_double); 
	std::cout.setf(std::ios::fixed);
	std::cout.precision(1);
	if (c == 0)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << c << "'" << std::endl;
	if (!ok_int)
		std::cout << "int : impossible" <<std::endl;
	else
		std::cout << "int : " << i <<std::endl;
	if (!ok_float)
		std::cout << "float : impossible" <<std::endl;
	else
		std::cout << "float : " << f << "f" << std::endl;
	if (!ok_double)
		std::cout << "double : impossible" <<std::endl;
	else
		std::cout << "double : " << d <<std::endl;
}

void convert_pseudoL(std::string str)
{
	std::cout << "*** input type pseudo_literal : " << str << " ***" << std::endl; 
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	if (str == "-inff" || str == "+inff" || str == "nanf")
	{
		std::cout << "float : " << str << std::endl;
		std::cout << "double value : " << str.substr(0, str.length() - 1) << std::endl;
	}
	else
	{
		std::cout << "float : " << str << "f" << std::endl;
		std::cout << "double value : " << str << std::endl;
	}
}

void ScalarConverter::convert(std::string str)
{
	if (check_input(str) == 1)
	{
		std::cout << "Error input" << std::endl;
		return ;
	}
	int which = which_input(str);
	switch (which)
	{
		case 1:
		{
			convert_float(str);
			break;
		}
		case 2:
		{
			convert_double(str);
			break;
		}
		case 3:
		{
			convert_char(str);
			break;
		}
		case 4:
		{
			convert_int(str);
			break;
		}
		default:
		{
			convert_pseudoL(str);
			break;
		}
	}
}
