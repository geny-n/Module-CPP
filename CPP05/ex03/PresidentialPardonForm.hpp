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

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm : public AForm
{
    private :
		std::string _Target;

    public :
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm( PresidentialPardonForm const &copy);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& f);
        ~PresidentialPardonForm(void);
        void execute(Bureaucrat const &executor) const;
};
#endif
