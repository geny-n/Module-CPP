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
