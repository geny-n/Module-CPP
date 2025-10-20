#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
    this->_Type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}
		
Dog& Dog::operator=(const Dog& f)
{
    std::cout << "Dog assignment operator called" << std::endl;
	this->_Type = f._Type;
    return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "[Dog] *Woof*" << std::endl;
}