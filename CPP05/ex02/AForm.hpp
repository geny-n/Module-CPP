/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 21:07:23 by ngeny             #+#    #+#             */
/*   Updated: 2025/05/23 21:56:31 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
    private :
        const std::string   _Name;
        bool                _Signed;
        const int           _GradeSign;
        const int           _GradeExec;

    public :
        AForm(void);
        AForm(std::string const &name, int gradeSign, int gradeExec);
        AForm( AForm const &copy);
        AForm& operator=(const AForm& f);
        ~AForm(void);

        std::string getName(void) const;
        bool        getSigned(void) const;
		int         getGradeSign(void) const;
		int         getGradeExec(void) const;

        void        beSigned(Bureaucrat &input);
        virtual void        execute(Bureaucrat const &executor) const = 0;

        class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class FormAlreadySigned : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class FormNotSigned : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
};
std::ostream& operator<<(std::ostream& os, const AForm& input);
#endif
