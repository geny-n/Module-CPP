/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:10:59 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/19 16:24:32 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	// Fixed aa = 5;
	// Fixed bb;
	// Fixed cc(aa);
	// bb = aa;

	// std::cout << "test copy aa = " <<aa << " bb = " << bb << " cc = " << cc <<std::endl;
	
	// std::cout << "0 = false   1 = true" << std::endl;
	// Fixed a = 5;
	// Fixed b( Fixed( 5.05f ));
	// std::cout << a << " + " << b << " = " << a + b << std::endl;
	// std::cout << a << " - " << b << " = " << a - b << std::endl;
	// std::cout << a << " / " << b << " = " << a / b << std::endl;
	// std::cout << a << " * " << b << " = " << a * b << std::endl;

	// a = 0;
	// // b = Fixed(6.05f);
	// b = 1;
	// std::cout << a << " > " << b << " = " << (a > b) << std::endl;
	// std::cout << a << " < " << b << " = " << (a < b) << std::endl;
	// std::cout << a << " >= " << b << " = " << (a >= b) << std::endl;
	// std::cout << a << " <= " << b << " = " << (a <= b) << std::endl;
	// std::cout << a << " == " << b << " = " << (a == b) << std::endl;
	// std::cout << a << " != " << b << " = " << (a != b) << std::endl;

	// a = 5;
	// Fixed c = a++;
	// std::cout << "a = " << a  << " c = " << c << std::endl;
	// a = 0;
	// c = ++a;
	// std::cout << "a = " << a  << " c = " << c << std::endl;

	// /*min max*/
	// 	/***non constant***/
	// a = 55;
	// b = 10;
	// std::cout << "min = " << Fixed::min(a, b) << std::endl;
	// std::cout << "max = " << Fixed::max(a, b) << std::endl;

	// 	/***constant***/
	// Fixed const x = 4;
	// Fixed const y = 40;
	// std::cout << "min = " << Fixed::min(x, y) << std::endl;
	// std::cout << "max = " << Fixed::max(x, y) << std::endl;

	return 0;
}
