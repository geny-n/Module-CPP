/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:26:40 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/19 16:28:49 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _Nbr_fix(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f1)
{
	// std::cout << "Copy constructor called" << std::endl;
    *this = f1;
}

Fixed::Fixed(const int n)
{
	this->_Nbr_fix = n << this->_Nbr_bit;
}

Fixed::Fixed(const float f)
{
	this->_Nbr_fix =static_cast<int>(roundf(f * (1 << this->_Nbr_bit)));
}
		
Fixed& Fixed::operator=(const Fixed& f)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    _Nbr_fix = f.getRawBits();
    return (*this);
}

/*  > < >= <= == != */
bool Fixed::operator>(const Fixed& f) const
{
	return (this->toFloat() > f.toFloat());
}

bool Fixed::operator<(const Fixed& f) const
{
	return (this->toFloat() < f.toFloat());
}

bool Fixed::operator>=(const Fixed& f) const
{
	return (this->toFloat() >= f.toFloat());
}

bool Fixed::operator<=(const Fixed& f) const
{
	return (this->toFloat() <= f.toFloat());
}

bool Fixed::operator==(const Fixed& f) const
{
	return (this->toFloat() == f.toFloat());
}

bool Fixed::operator!=(const Fixed& f) const
{
	return (this->toFloat() != f.toFloat());
}

/*  + - * / */
Fixed Fixed::operator+(const Fixed& f)
{
    Fixed result;
    result.setRawBits(this->getRawBits() + f.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed& f)
{
    Fixed result;
    result.setRawBits(this->getRawBits() - f.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed& f)
{
	Fixed result(this->toFloat() * f.toFloat());
    return result;
}

Fixed Fixed::operator/(const Fixed& f)
{
	if (f.toFloat() == 0)
		return ((std::cout << "Error "), 0);
    Fixed result(this->toFloat() / f.toFloat());
    return result;
}

/*  i++ ++i i-- --i */
Fixed Fixed::operator++(int)//i++
{
	Fixed tmp = *this;
	this->_Nbr_fix++;
	return (tmp);
}

Fixed &Fixed::operator++(void) //++i
{
	this->_Nbr_fix++;
	return (*this);
}

Fixed Fixed::operator--(int)//i++
{
	Fixed tmp = *this;
	this->_Nbr_fix--;
	return (tmp);
}

Fixed &Fixed::operator--(void) //++i
{
	this->_Nbr_fix--;
	return (*this);
}

/* min min const max max const*/
	/****non constant****/
Fixed Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
} 

	/****non constant****/
Fixed const Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}


Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
	return static_cast<float>(this->_Nbr_fix) / (1 << Fixed::_Nbr_bit);
}

int Fixed::toInt( void ) const
{
	return this->_Nbr_fix >> Fixed::_Nbr_bit;
}
		
int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called"<< std::endl;
	return (this->_Nbr_fix);
}

void Fixed::setRawBits( int const raw )
{
	this->_Nbr_fix = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& f) {
    out << f.toFloat();
    return out;
}

