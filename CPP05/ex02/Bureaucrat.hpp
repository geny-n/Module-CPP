
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:53:03 by ngeny             #+#    #+#             */
/*   Updated: 2025/05/14 10:00:41 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

#define RED         "\033[0;31m"
#define GREEN       "\033[0;32m"
#define YELLOW      "\033[0;33m"
#define BLUE        "\033[0;34m"
#define MAGENTA     "\033[0;35m"
#define CYAN        "\033[0;36m"
#define WHITE       "\033[0;37m"

class AForm;

class Bureaucrat
{
	private :
		const std::string 	_Name;
		int					_Grade;

	public :
		Bureaucrat(void);
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat( Bureaucrat const &copy);
		Bureaucrat& operator=(const Bureaucrat& f);
		~Bureaucrat(void);

		std::string getName(void) const;
		int getGrade(void) const;
		void	incrementGrade();
		void	decrementGrade();

		void signedAform(AForm &f);
		void executeForm(AForm const &form) const;

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
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& input);
#endif
