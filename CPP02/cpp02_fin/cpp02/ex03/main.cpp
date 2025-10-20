/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeff <jeff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:31:14 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/21 17:18:37 by jeff             ###   ########.fr       */
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
	std::cout << "interieur = "<< test << std::endl;
	
	const Point p2(3, 12);
	test = bsp(a, b, c, p2);
	std::cout << "exterieur = "<< test << std::endl;
	
	const Point p3(3, 2);
	test = bsp(a, b, c, p3);
	std::cout << "sur un cote = "<< test << std::endl;
	
	const Point p4(2, 5);
	test = bsp(a, b, c, p4);
	std::cout << "sommet = "<< test << std::endl;
	return (0);
}