/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:07:13 by ngeny             #+#    #+#             */
/*   Updated: 2025/05/19 18:36:10 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm default constructor " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm constructor " << std::endl;
	this->_Target = target;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &copy):AForm(copy)
{
	std::cout << "PresidentialPardonForm copy constructor " << std::endl;
	*this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& f)
{
	std::cout << "PresidentialPardonForm copy assignment constructor " << std::endl;
	this->_Target = f._Target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm is destroyed" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getSigned() == 0)
        throw FormNotSigned();
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooHighException();
    std::cout << "PresidentialPardonForm " << this->_Target << " has been pardoned by Zaphod Beeblebrox" <<std::endl;
}
