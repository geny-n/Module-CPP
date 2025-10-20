/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:38:14 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/29 11:20:58 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if(!(i < 100 && i > 0))
		return this->_Ideas[0];
	return (this->_Ideas[i]);
}

void Brain::setIdeas(int i, std::string idea)
{
		std::ostringstream s;
		s << "No " << i << " : " << idea;
		this->_Ideas[i] = s.str();
}
