/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:04:02 by ngeny             #+#    #+#             */
/*   Updated: 2025/09/10 11:18:15 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::cout << "BitcoinExchange default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : _Rates(other._Rates)
{
    std::cout << "BitcoinExchange copy constructor called" << std::endl;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    std::cout << "BitcoinExchange copy assignment operator called" << std::endl;
    if (this != &other)
        _Rates = other._Rates;
  return *this;
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << "BitcoinExchange destructor called" << std::endl;
}

bool BitcoinExchange::checkValue(const std::string &value)
{
    char* end;
    double val = strtod(value.c_str(), &end);

    if (end == value.c_str() || *end != '\0' || val < 0)
    {
        std::cerr << "Error: not a positive number." << std::endl;
        return (false); 
    }

    if (val > 1000)
    {
        std::cerr << "Error: too large a number." << std::endl;
        return (false);
    }
    return (true);
}

bool BitcoinExchange::checkDate(const std::string &date)
{
    if (date[4]!= '-' || date[7]!= '-' || date.size() != 10) // YYYY-MM-DD
    return (false);
    
    int i = 0;
    while (date[i]) //verifie si la date est composee de chiffre
    {
        if (!isdigit(date[i]) && date[i] != '-')
            return (false);
        i++;
    }

    int bi;
    int year  = atoi(date.substr(0, 4).c_str()); //1 = bissextile   0 = non bissextile
    int month = atoi(date.substr(5, 2).c_str());
    int day   = atoi(date.substr(8, 2).c_str());
    
    if (month < 1 || month > 12) //mois
        return (false);
    bi = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);//annee bissextile
    if (month == 2)
    {
        if (bi == 0 && !(day >= 1 && day <= 28)) //fevrier non bissextile
            return (false);
        if (bi == 1 && !(day >= 1 && day <= 29)) //fevrier bissextile
            return (false);
    }
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && !(day >= 1 && day <= 30)) //30 jours ou 31 jours
        return (false);
    else if (!(day >= 1 && day <= 31))
        return (false);
    return (true);
}

bool BitcoinExchange::openFileInput(const std::string &fileName)
{
    std::string line;
    std::string date;
    std::string value;
    std::ifstream file(fileName.c_str());
    
    if (!file.is_open())
        throw std::runtime_error("Error input: could not open file.");
    if (!std::getline(file, line) || line != "date | value") //verification 1ere ligne
        std::cerr << "Error: 'date | value'." << std::endl;

    int num = 2;
    while (std::getline(file, line))
    {
        if (line.empty())
        {
            std::cerr << RED << "num : " << num << " Error: bad input => empty line" << RESET << line << std::endl;
            num++;
            continue;
        }
        if (line.size() < 13 || line[10] != ' ' || line[11] != '|' || line[12] != ' ') //verification format "date | value"
        {
            std::cerr << "num : " << num << " Error: bad input => " << line << std::endl;
            num++;
            continue;
        }
        date = line.substr(0, 10);
        if (!checkDate(date)) //verification de la date 
        {
            std::cerr << "num : " << num << " Error: bad input => " << date << std::endl;
            num++;
            continue;
        }
        value = line.substr(13);
        std::cerr << "num : " << num << " ";
        if (!checkValue(value)) //verification de la valeur
        {
            num++;
            continue;
        }
        double val = atof(value.c_str());
        ExchangeRates(date, val);
        num++;
    }
    file.close();
    return (true);
}

bool BitcoinExchange::openFileCSV(const std::string &fileName)
{
    std::string line;
    std::ifstream file(fileName.c_str());
    
    if (!file.is_open())
        throw std::runtime_error("Error csv: could not open file.");
    if (!std::getline(file, line) || line != "date,exchange_rate")
        throw std::runtime_error("Error csv: emptyfile.");
    
    while (std::getline(file, line)) //lire a partir de la 2eme ligne
    {
        //exctraction de la date et du taux de change delimite par ','
        std::stringstream ss(line);
        std::string date;
        std::string rate;
        std::getline(ss, date, ',');
        std::getline(ss, rate);
        char* end;
        double r_val = strtod(rate.c_str(), &end); //convertion string to double
        _Rates[date] = r_val; // stocke les valeurs dans la map
    }
    file.close();
    return (true);
}

void BitcoinExchange::ExchangeRates(const std::string &Inputdate, double value)
{
    if (_Rates.empty())
    {
        std::cout << "Error: no exchange rates available" << std::endl;
        return;
    }
    std::map<std::string, double>::iterator it = _Rates.lower_bound(Inputdate); //cherche la date demande si la date n existe pas ca renvoie la date supperieur
    if (it == _Rates.end() || it->first != Inputdate) //si la date demande n existe pas it = date supperieur, it-- prend la date inferieur
    {  
        if (it == _Rates.begin())
        {
            std::cout << "Error: date or earlier date not found" << std::endl;
            return;
        }
        it--;
    }

    std::cout << Inputdate <<  " => " << value << " = " << value * it->second << RESET << std::endl;
    
}
