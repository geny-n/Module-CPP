/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:51:57 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/29 11:51:58 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
    this->_Type = "Dog";
    this->_Brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
    std::cout << "Dog assignment operator called" << std::endl;
	this->_Type = copy._Type;
    this->_Brain = new Brain(*copy._Brain);
}
		
Dog& Dog::operator=(const Dog& f)
{
    std::cout << "Dog assignment operator called" << std::endl;
	delete _Brain;
    this->_Type = f._Type;
    this->_Brain = new Brain(*f._Brain);
    return (*this);
}

Dog::~Dog(void)
{
    delete (_Brain);
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "[Dog] *Woof*" << std::endl;
}

Brain *Dog::getBrain(void) const
{
	return (this->_Brain);
}
