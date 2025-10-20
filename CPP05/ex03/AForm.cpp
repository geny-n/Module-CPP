/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 21:46:53 by ngeny             #+#    #+#             */
/*   Updated: 2025/05/26 16:00:33 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void):_Name("default"), _Signed(0), _GradeSign(0), _GradeExec(0)
{
    std::cout << "AForm default constructor " << this->getName() << std::endl;
}

AForm::AForm(std::string const &name, int gradeSign, int gradeExec):_Name(name), _Signed(0), _GradeSign(gradeSign), _GradeExec(gradeExec)
{
    std::cout << "AForm constructor " << this->getName() << std::endl;
    try
    {
        if (this->_GradeSign < 1 || this->_GradeExec < 1)
        {
            throw AForm::GradeTooHighException();
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        if (this->_GradeSign > 150 || this->_GradeExec > 150)
        {
            throw AForm::GradeTooLowException();
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

AForm::AForm(AForm const &copy):_GradeSign(copy._GradeSign), _GradeExec(copy._GradeExec)
{
    std::cout << "AForm copy Constructor " << this->getName() << std::endl;
    this->_Signed = copy._Signed;
}

AForm& AForm::operator=(const AForm& f)
{
    std::cout << "AForm copy assignment constructor " << this->getName() << std::endl;
	this->_Signed = f._Signed;
	return (*this);
}

AForm::~AForm(void)
{
    std::cout << "AForm is destroyed " << this->getName() << std::endl;
}

std::string AForm::getName(void) const
{
    return (this->_Name);
}

bool        AForm::getSigned(void) const
{
    return (this->_Signed);
}
int         AForm::getGradeSign(void) const
{
    return (this->_GradeSign);
}

int         AForm::getGradeExec(void) const
{
    return (this->_GradeExec);
}

void        AForm::beSigned(Bureaucrat &input)
{
    if (input.getGrade() > this->_GradeSign)
    {
        throw AForm::GradeTooLowException();
    }
    if (this->_GradeSign < 1)
        throw AForm::GradeTooHighException();
    this->_Signed = 1;
}


const char* AForm::GradeTooHighException::what() const throw()
{
	return ("AForm grade too high!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("AForm grade too low!");
}

const char* AForm::FormAlreadySigned::what() const throw()
{
	return ("AForm already signed!");
}

const char* AForm::FormNotSigned::what() const throw()
{
	return ("AForm not signed!");
}

std::ostream& operator<<(std::ostream& os, const AForm& input)
{
    os << "Form :: form Name is " << input.getName() << " status : " << input.getSigned() << " and my GradeSign is : " << input.getGradeSign() << " and my GradeExec is : " << input.getGradeExec() << std::endl;
    return os;
}
