/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 21:07:23 by ngeny             #+#    #+#             */
/*   Updated: 2025/05/19 17:53:15 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public :
        Intern(void);
        Intern( Intern const &copy);
        Intern& operator=(const Intern& f);
        ~Intern(void);

        AForm *Shrubbery(std::string targetF);
        AForm *Robotomy(std::string targetF);
        AForm *Presidential(std::string targetF);
        AForm *makeForm(std::string nameF, std::string targetF);
};

#endif
