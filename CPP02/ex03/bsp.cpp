/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:27:19 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/19 16:28:16 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float check_sign(Point const p1, Point const p2, Point const p3, Point const point)
{
	float sign;
	float v1x;
	float v1y;
	float v2x;
	float v2y;
	float v3x;
	float v3y;

	v1x = p2.get_x().toFloat() - p1.get_x().toFloat();
	v1y = p2.get_y().toFloat() - p1.get_y().toFloat();

	v2x = point.get_x().toFloat() - p1.get_x().toFloat();
	v2y = point.get_y().toFloat() - p1.get_y().toFloat();

	v3x = p3.get_x().toFloat() - p1.get_x().toFloat();
	v3y = p3.get_y().toFloat() - p1.get_y().toFloat();
	
	sign = ((v1x * v2y) - (v1y * v2x)) * ((v1x * v3y) - (v1y * v3x));
	return (sign);
	
}
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float sign1 = check_sign(a, b, c, point);
	float sign2 = check_sign(b, c, a, point);
	float sign3 = check_sign(c, a, b, point);
	
	// std::cout << "sign1 = " << sign1 << std::endl;
	// std::cout << "sign2 = " << sign2 << std::endl;
	// std::cout << "sign3 = " << sign3 << std::endl;

	if (sign1 > 0 && sign2 > 0 && sign3 > 0)
		return (true);
	return (false);
}