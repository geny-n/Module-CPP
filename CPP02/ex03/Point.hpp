/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:31:57 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/19 16:31:58 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "iostream"
#include "Fixed.hpp"

class Point
{
	private :
		Fixed const _x;
		Fixed const _y;
	public :
		Point (void); //constructeur par defaut
		Point (float const x, float const y);//constructeur personnalise
		Point (const Point& copy);//constructeur par copie
		Point&			operator=(Point const &rSym); //surcharge de l operateur =
		~Point (void);
		Fixed get_x(void) const;
		Fixed get_y(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
