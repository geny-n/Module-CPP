/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 21:46:53 by ngeny             #+#    #+#             */
/*   Updated: 2025/05/19 16:55:36 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
    std::cout << "Intern default constructor " << std::endl;
}

Intern::Intern(Intern const &copy)
{
    std::cout << "Intern copy Constructor " << std::endl;
    *this = copy;
}

Intern& Intern::operator=(const Intern& f)
{
    std::cout << "Intern copy assignment constructor " << std::endl;
    (void)f;
	return (*this);
}

Intern::~Intern(void)
{
    std::cout << "Intern is destroyed " << std::endl;
}

AForm *Intern::Shrubbery(std::string targetF)
{
    return (new ShrubberyCreationForm(targetF));
}

AForm *Intern::Robotomy(std::string targetF)
{
    return (new RobotomyRequestForm(targetF));
}

AForm *Intern::Presidential(std::string targetF)
{
    return (new PresidentialPardonForm(targetF));
}

AForm *Intern::makeForm(std::string nameF, std::string targetF)
{
    AForm* (Intern::*choseForm[3])(std::string) = {&Intern::Shrubbery, &Intern::Robotomy, &Intern::Presidential};
    std::string whichForm[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    int i = 0;
    while (i < 3)
    {
        if (whichForm[i] == nameF)
        {
            std::cout << "Intern creates " << nameF << std::endl;
            return (this->*choseForm[i])(targetF);
        }
        i++;
    }
    std::cout << "the form " << nameF << " could not created" << std::endl;
    return (NULL);
}
