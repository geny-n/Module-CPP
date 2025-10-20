/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:05:21 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/23 09:14:39 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _Nbr_fix(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f1)
{
	std::cout << "Copy constructor called" << std::endl;
    *this = f1;
}

Fixed& Fixed::operator=(const Fixed& f)
{
    std::cout << "Copie assignment operator called" << std::endl;
    _Nbr_fix = f.getRawBits();
    return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called"<< std::endl;
	return (this->_Nbr_fix);
}

void Fixed::setRawBits( int const raw )
{
	this->_Nbr_fix = raw;
}
