/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 22:27:21 by ngeny             #+#    #+#             */
/*   Updated: 2025/05/14 10:06:45 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class AForm;

Bureaucrat::Bureaucrat(void):_Name("default"), _Grade(150)
{
	std::cout << "Bureaucrat default constructor " << this->getName() << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade):_Name(name)
{
	std::cout << "Bureaucrat constructor " << this->getName() << std::endl;
	this->_Grade = grade;
	try
	{
	    if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
	}
    catch (GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
        return ;
    }
    try
	{
	    if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
	}
    catch (GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
        return ;
    }
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy)
{
	std::cout << "Bureaucrat copy constructor " << this->getName() << std::endl;
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& f)
{
	std::cout << "Bureaucrat copy assignment constructor " << this->getName() << std::endl;
	this->_Grade = f._Grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat is destroyed" << this->getName() << std::endl;
}

std::string Bureaucrat::getName(void) const
{
	return (this->_Name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_Grade);
}

void Bureaucrat::incrementGrade(void)
{
    std::cout << "Bureaucrat do increment" << std::endl;
	try
	{
	    if (this->_Grade <= 1)
            throw Bureaucrat::GradeTooHighException();
	}
	catch (GradeTooHighException &e)
	{
        std::cout << e.what() << std::endl;
        return ;
	}
    this->_Grade--;
}

void Bureaucrat::decrementGrade(void)
{
    std::cout << "Bureaucrat do decrement" << std::endl;
	try
	{
	    if (this->_Grade >= 150)
            throw Bureaucrat::GradeTooLowException();
	}
	catch (GradeTooLowException &e)
	{
        std::cout << e.what() << std::endl;
        return ;
	}
    this->_Grade++;
}

void Bureaucrat::signedAform(AForm &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << "Bureaucrat " << this->_Name << " signed " << f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Bureaucrat " << this->_Name <<  " could not sign " << f.getName() << " because " << e.what() << std::endl;
	}

}

void Bureaucrat::executeForm(AForm const & form) const
{
    try
	{
		form.execute(*this);
		std::cout << "Bureaucrat " << this->_Name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_Name <<  " could not execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade too low!");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& input)
{
    if (input.getGrade() < 1 || input.getGrade() > 150)
        os << "Bureaucrat :: My Name is " << input.getName() << " and my grade is invalid" << std::endl;
    else
        os << "Bureaucrat :: My Name is " << input.getName() << " and my Grade is : " << input.getGrade() << std::endl;
    return os;
}
