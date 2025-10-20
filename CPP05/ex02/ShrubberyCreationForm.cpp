/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:07:13 by ngeny             #+#    #+#             */
/*   Updated: 2025/05/24 11:52:56 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm default constructor " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm constructor " << this->getName() << std::endl;
	this->_Target = target;
}


ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &copy):AForm(copy)
{
	std::cout << "ShrubberyCreationForm copy constructor " << std::endl;
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& f)
{
	std::cout << "ShrubberyCreationForm copy assignment constructor " << std::endl;
	this->_Target = f._Target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm is destroyed" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->getSigned() == 0)
        throw FormNotSigned();
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooHighException();
    std::string out_file;
	out_file = this->_Target + "_shrubbery";
	std::ofstream file_out(out_file.c_str(), std::ios::out);
	if (file_out.is_open())
    {
        std::cout << "ShrubberyCreationForm the form " << out_file << " is created" << std::endl;
        
        file_out << "   ccee88oo\n";
        file_out << "  C8O8O8Q8PoOb o8oo\n";
        file_out << " dOB69QO8PdUOpugoO9bD\n";
        file_out << "CgggbU8OU qOp qOdoUOdcb\n";
        file_out << "    6OuU  /p u gcoUodpP\n";
        file_out << "      \\\\//  /douUP\n";
        file_out << "        \\\\\\////\n";
        file_out << "         |||/\\\n";
        file_out << "         |||\\/\n";
        file_out << "         |||||\n";
        file_out << "   .....//||||\\....";
        file_out << std::endl;
    }
    else
        std::cout << "ShrubberyCreationForm can not open outfile" <<std::endl;
}
