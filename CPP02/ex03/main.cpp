/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:31:14 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/23 09:22:00 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main (void)
{
	const Point a(1, 1);
	const Point b(2, 5);
	const Point c(5, 3);
	
	const Point p1(3, 3);
	bool test = bsp(a, b, c, p1);
	std::cout << "inside = "<< test << std::endl;
	
	const Point p2(3, 12);
	test = bsp(a, b, c, p2);
	std::cout << "outside = "<< test << std::endl;
	
	const Point p3(3, 2);
	test = bsp(a, b, c, p3);
	std::cout << "side = "<< test << std::endl;
	
	const Point p4(2, 5);
	test = bsp(a, b, c, p4);
	std::cout << "vertex = "<< test << std::endl;
	return (0);
}