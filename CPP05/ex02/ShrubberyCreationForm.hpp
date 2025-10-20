/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:07:24 by ngeny             #+#    #+#             */
/*   Updated: 2025/05/26 15:58:59 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONSFORM_HPP
#define SHRUBBERYCREATIONSFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private :
		std::string _Target;
    
    public :
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm( ShrubberyCreationForm const &copy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& f);
        ~ShrubberyCreationForm(void);
        void execute(Bureaucrat const &executor) const;
};
#endif
