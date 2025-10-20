/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:52:25 by ngeny             #+#    #+#             */
/*   Updated: 2025/05/26 15:13:29 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	Bureaucrat a("normalBOSS", 5);
	std::cout << a << std::endl;
	a.incrementGrade();
	std::cout << "name =  " << a.getName() << "   after increment Grade = " << a.getGrade() << std::endl;
	a.decrementGrade();
	std::cout << "name =  " << a.getName() << "   after decrement Grade = " << a.getGrade() << std::endl<< std::endl<< std::endl;

	/**********************************************************************************************************/

	Bureaucrat b("BigBoss", 1);
	std::cout << b << std::endl;
	b.incrementGrade();
	std::cout << "name =  " << b.getName() << "   after increment Grade = " << b.getGrade() << std::endl;
	b.decrementGrade();
	std::cout << "name =  " << b.getName() << "   after decrement Grade = " << b.getGrade() << std::endl<< std::endl<< std::endl;

	/**********************************************************************************************************/

	Bureaucrat c("LittleBoss", 151);

	std::cout << c << std::endl;
	c.incrementGrade();
	std::cout << "name =  " << c.getName() << "   after increment Grade = " << c.getGrade() << std::endl;
	c.decrementGrade();
	std::cout << "name =  " << c.getName() << "   after decrement Grade = " << c.getGrade() << std::endl<< std::endl<< std::endl;
	
	/**********************************************************************************************************/
	
	Bureaucrat d("testBoss", 0);

	std::cout << d << std::endl;
	d.incrementGrade();
	std::cout << "name =  " << d.getName() << "   after increment Grade = " << d.getGrade() << std::endl;
	d.decrementGrade();
	std::cout << "name =  " << d.getName() << "   after decrement Grade = " << d.getGrade() << std::endl<< std::endl<< std::endl;
	return (0);
}
