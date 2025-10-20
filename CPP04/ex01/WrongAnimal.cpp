/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:18:49 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/29 11:18:50 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _Type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& f1)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = f1;
}
		
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& f)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
	this->_Type = f._Type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "[WrongAnimal] *sound*" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_Type);
}