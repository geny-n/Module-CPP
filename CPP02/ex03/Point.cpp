/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:31:25 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/19 16:31:26 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point (void) : _x(0), _y(0)
{
	
}
Point::Point (float const x, float const y) : _x(x), _y(y)
{
	
}

Point::Point (const Point& copy) : _x(copy._x), _y(copy._y)
{
    
}

Point& Point::operator=(const Point& f)
{
    (void) f;
    return (*this);
}
Point::~Point (void)
{
	
}

Fixed Point::get_x(void) const
{
    return (this->_x);
}

Fixed Point::get_y(void) const
{
    return (this->_y);
}