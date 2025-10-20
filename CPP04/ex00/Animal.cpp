/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:22:38 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/29 10:22:39 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _Type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& f1)
{
	std::cout << "Animal copy constructor called" << std::endl;
    *this = f1;
}
		
Animal& Animal::operator=(const Animal& f)
{
    std::cout << "Animal assignation operator called" << std::endl;
	this->_Type = f._Type;
    return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "[Animal] *sound*" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_Type);
}