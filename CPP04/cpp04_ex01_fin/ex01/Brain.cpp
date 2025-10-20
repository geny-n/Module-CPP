#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& f1)
{
	std::cout << "Brain copy constructor called" << std::endl;
    *this = f1;
}
		
Brain& Brain::operator=(const Brain& f)
{
    std::cout << "Brain assignation operator called" << std::endl;
	this->_Ideas[0] = f._Ideas[0];
    return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string  Brain::getIdeas(int i)
{
	return (this->_Ideas[i]);
}

void Brain::setIdeas(int i, std::string idea)
{
	// std::cout << i << idea << std::endl;
	this->_Ideas[i] = idea;
	// std::cout << i << this->_Ideas[i] << std::endl;
}