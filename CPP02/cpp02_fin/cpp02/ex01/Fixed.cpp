/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeff <jeff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:10:26 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/21 18:52:13 by jeff             ###   ########.fr       */
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

Fixed::Fixed(const int n) //convertir un entier en virgule fixe
{
	std::cout << "Int constructor called" << std::endl;
	this->_Nbr_fix = n << this->_Nbr_bit; //multiplie n par 2^8
}

Fixed::Fixed(const float f)//convertir un float en virgule fixe
{
	std::cout << "Float constructor called" << std::endl;
	this->_Nbr_fix =static_cast<int>(roundf(f * (1 << this->_Nbr_bit))); //multiplie f par 2^8 puis arrondi a l unite (on fait un cast pour vers un int)
}
		
Fixed& Fixed::operator=(const Fixed& f)
{
    std::cout << "Assignation operator called" << std::endl;
    _Nbr_fix = f.getRawBits();
    return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
	return static_cast<float>(this->_Nbr_fix) / (1 << Fixed::_Nbr_bit); //convertion de virgule fixe a float
}

int Fixed::toInt( void ) const
{
	return this->_Nbr_fix >> Fixed::_Nbr_bit; //convertion de virgule fixe a int
}
		
int Fixed::getRawBits( void ) const
{
	return (this->_Nbr_fix);
}

void Fixed::setRawBits( int const raw )
{
	this->_Nbr_fix = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& f) 
{
    out << f.toFloat();
    return out;
}

