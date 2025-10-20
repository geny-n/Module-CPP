/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:21:42 by ngeny             #+#    #+#             */
/*   Updated: 2025/06/05 14:23:15 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char **argv)
{
	(void) argc;
	if (argc != 2)
	{
		std::cout << "error arg" << std::endl;
		return (0);
	}
	ScalarConverter::convert(argv[1]);
	return (0);	
}