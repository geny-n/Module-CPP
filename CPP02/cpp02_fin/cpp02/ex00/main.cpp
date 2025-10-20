/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeff <jeff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:21:34 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/21 19:04:15 by jeff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// video sur les nomvre a virgule fixe https://www.youtube.com/watch?app=desktop&v=YXKDjVcCWyE

#include "Fixed.hpp"
#include <iostream>

int main(void) 
{
	Fixed a;
	Fixed b( a );

	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}