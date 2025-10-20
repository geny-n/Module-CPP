#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
    this->_Type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}
		
WrongCat& WrongCat::operator=(const WrongCat& f)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
	this->_Type = f._Type;
    return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "[WrongCat] *sound*" << std::endl;
}

// std::string WrongCat::getType(void) {
//     return (this->_Type);
// }