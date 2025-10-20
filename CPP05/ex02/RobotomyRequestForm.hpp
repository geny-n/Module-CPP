/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:07:24 by ngeny             #+#    #+#             */
/*   Updated: 2025/05/19 18:31:03 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <fstream>
#include <cstdlib>  // pour rand() et srand()
#include <ctime>    // pour time()

class RobotomyRequestForm : public AForm
{
    private :
		std::string _Target;
    
    public :
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm( RobotomyRequestForm const &copy);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& f);
        ~RobotomyRequestForm(void);
        void execute(Bureaucrat const &executor) const;
};
#endif
