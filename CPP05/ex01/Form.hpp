/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 21:07:23 by ngeny             #+#    #+#             */
/*   Updated: 2025/05/16 13:09:47 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private :
        const std::string   _Name;
        bool                _Signed;
        const int           _GradeSign;
        const int           _GradeExec;

    public :
        Form(void);
        Form(std::string const &name, int gradeSign, int gradeExec);
        Form( Form const &copy);
        Form& operator=(const Form& f);
        ~Form(void);

        std::string getName(void) const;
        bool        getSigned(void) const;
		int         getGradeSign(void) const;
		int         getGradeExec(void) const;

        void        beSigned(Bureaucrat &input);

        class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

        class FormAlreadySigned : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
};
std::ostream& operator<<(std::ostream& os, const Form& input);
#endif
