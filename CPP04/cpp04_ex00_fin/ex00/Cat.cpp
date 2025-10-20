#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
    this->_Type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}
		
Cat& Cat::operator=(const Cat& f)
{
    std::cout << "Cat assignment operator called" << std::endl;
	this->_Type = f._Type;
    return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "[Cat] *Meow*" << std::endl;
}
