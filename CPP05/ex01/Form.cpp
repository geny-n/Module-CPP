/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 21:46:53 by ngeny             #+#    #+#             */
/*   Updated: 2025/05/16 16:38:04 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void):_Name("default"), _Signed(0), _GradeSign(0), _GradeExec(0)
{
    std::cout << "Form default constructor " << this->getName() << std::endl;
}

Form::Form(std::string const &name, int gradeSign, int gradeExec):_Name(name), _Signed(0), _GradeSign(gradeSign), _GradeExec(gradeExec)
{
    std::cout << "Form constructor " << this->getName() << std::endl;
    try
    {
        if (this->_GradeSign < 1 || this->_GradeExec < 1)
        {
            throw Form::GradeTooHighException();
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
            throw Form::GradeTooLowException();
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

Form::Form(Form const &copy):_GradeSign(copy._GradeSign), _GradeExec(copy._GradeExec)
{
    std::cout << "Form copy Constructor " << this->getName() << std::endl;
    this->_Signed = copy._Signed;
}

Form& Form::operator=(const Form& f)
{
    std::cout << "Form copy assignment constructor " << this->getName() << std::endl;
	this->_Signed = f._Signed;
	return (*this);
}

Form::~Form(void)
{
    std::cout << "Form is destroyed " << this->getName() << std::endl;
}

std::string Form::getName(void) const
{
    return (this->_Name);
}

bool        Form::getSigned(void) const
{
    return (this->_Signed);
}
int         Form::getGradeSign(void) const
{
    return (this->_GradeSign);
}

int         Form::getGradeExec(void) const
{
    return (this->_GradeExec);
}

void        Form::beSigned(Bureaucrat &input)
{
    std::cout << "Form beSigned" << std::endl;
    if (this->_Signed == 1)
        throw Form::FormAlreadySigned();
    if (input.getGrade() > this->_GradeSign)
    {
        throw Form::GradeTooLowException();
    }
    if (this->_GradeSign < 1)
        throw Form::GradeTooHighException();

    this->_Signed = 1;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form Grade too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form Grade too low!");
}

const char* Form::FormAlreadySigned::what() const throw()
{
	return ("Form already signed!");
}

std::ostream& operator<<(std::ostream& os, const Form& input)
{
    os << "Form :: form Name is " << input.getName() << " status : " << input.getSigned() << " and my GradeSign is : " << input.getGradeSign() << " and my GradeExec is : " << input.getGradeExec() << std::endl;
    return os;
}
