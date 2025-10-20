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

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm default constructor " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequestForm", 72, 42)
{
    std::cout << "RobotomyRequestForm constructor " << std::endl;
	this->_Target = target;
}


RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &copy):AForm(copy)
{
	std::cout << "RobotomyRequestForm copy constructor " << std::endl;
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& f)
{
	std::cout << "RobotomyRequestForm copy assignment constructor " << std::endl;
	this->_Target = f._Target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm is destroyed" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->getSigned() == 0)
        throw FormNotSigned();
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooHighException();

    static bool seeded = false;
    if (!seeded)
    {
        std::srand(std::time(0));
        seeded = true;
    }

    std::cout << "* Drilling noises... *" << std::endl;
    
    int result = std::rand() % 2; // 0 ou 1 aleatoire
    if (result)
        std::cout << GREEN << this->_Target << " has been robotomized successfully!" << WHITE << std::endl;
    else
        std::cout << RED << "Robotomy failed on " << this->_Target << WHITE << std::endl;
}
