/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:18:27 by ngeny             #+#    #+#             */
/*   Updated: 2025/06/05 14:23:31 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
#include <sstream>
#include <limits>
#include <cstdlib>

class ScalarConverter
{
	private :

	public :
		ScalarConverter(void);
		ScalarConverter( ScalarConverter const &copy);
		ScalarConverter& operator=(const ScalarConverter& f);
		~ScalarConverter(void);
		
		static void convert(std::string str);
};
#endif