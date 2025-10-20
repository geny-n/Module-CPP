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
	int i = 0;
	while (i < 100)
	{
		this->_Ideas[i] = f._Ideas[i];
		i++;
	}
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
	std::ostringstream oss;
    oss << i;
    std::string istr = oss.str();
	this->_Ideas[i] = "no " + istr + " : " + idea;
}