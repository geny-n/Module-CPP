/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:51:50 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/29 11:51:51 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
    this->_Type = "Cat";
    this->_Brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
    this->_Type = copy._Type;
    this->_Brain = new Brain(*copy._Brain);
}
		
Cat& Cat::operator=(const Cat& f)
{
    std::cout << "Cat assignment operator called" << std::endl;
    delete _Brain;
    this->_Type = f._Type;
    this->_Brain = new Brain(*f._Brain);
    return (*this);
}

Cat::~Cat(void)
{
    delete (_Brain);
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "[Cat] *Meow*" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (this->_Brain);
}
