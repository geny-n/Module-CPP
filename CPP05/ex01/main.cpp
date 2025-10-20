/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:52:25 by ngeny             #+#    #+#             */
/*   Updated: 2025/05/16 16:39:18 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	Bureaucrat a("normalBOSS", 5);
	Bureaucrat b("BigBoss", 1);
	Bureaucrat c("LittleBoss", 151);
	Bureaucrat d("testFormBoss", 40);
	std::cout << std::endl;
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << d;

	std::cout << std::endl << BLUE << "*****************************FORM*****************************" << WHITE <<std::endl;

	/*test default constructor*/
	std::cout << GREEN << "TEST FORM DEFAULT CONSTRUCTOR" << WHITE << std::endl;
	Form f;
	std::cout << f << std::endl;

	/*test constructor*/
	std::cout << GREEN << "TEST PARAMETERS FORM CONSTRUCTOR" << WHITE << std::endl;
	Form ff("aaa", 45, 30);
	std::cout << ff << std::endl;

	Form fff("bbb", 45, 430);
	std::cout << fff << std::endl;

	Form ffff("ccc", 45, 0);
	std::cout << ffff << std::endl << std::endl;

	/*test signed form*/
	std::cout << GREEN << "TEST BESIGNED : GRADE HIGH ENOUGH FOR SIGNATURE" << WHITE << std::endl;
	std::cout << "Bureaucrat Grade =  " << a.getGrade() << " Form requested SignGrade = " << ff.getGradeSign() << std::endl;
	std::cout << "before signed " << ff;
	ff.beSigned(a);
	std::cout << "after signed " << ff << std::endl << std::endl;

	/*form = 3 bureaucrat = 40 -> no*/
	std::cout << GREEN << "TEST BESIGNED : BUREAUCRAT GRADE TOO LOW FOR SIGNATURE" << WHITE << std::endl;
	Form TopForm("TopForm", 3, 30);
	Bureaucrat Clerk("noob", 40);
	std::cout << "before signed " << TopForm;
	try
	{
		TopForm.beSigned(Clerk);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "after signed " << TopForm << std::endl << std::endl;

	/*Test form already signed*/
	std::cout << GREEN << "TEST BESIGNED : FORM ALREADY SIGNED" << WHITE << std::endl;
	std::cout << "Bureaucrat Grade =  " << a.getGrade() << " Form requested SignGrade = " << ff.getGradeSign() << std::endl;
	std::cout << "before signed " << ff;
	try
	{
		ff.beSigned(Clerk);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "after signed " << ff << std::endl;

    std::cout << MAGENTA << "*****************************TEST SIGNFORM*****************************" << WHITE <<std::endl <<std::endl;

	/*Test Grade OK for signature*/
	std::cout << GREEN << "TEST SIGNFORM : GRADE HIGH ENOUGH FOR SIGNATURE" << WHITE << std::endl;
	Form FSigned("FSigned", 35, 30);
	std::cout << "Bureaucrat Grade =  " << a.getGrade() << " Form requested SignGrade = " << FSigned.getGradeSign() << std::endl;
	std::cout << "before signed " << FSigned;
	a.signedform(FSigned);
	std::cout << "after signed " << FSigned << std::endl << std::endl;

	/*Test Grade too low for signature*/
	std::cout << GREEN << "TEST SIGNFORM : GRADE TOO LOW" << WHITE << std::endl;
	Form notSigned("notSigned", 3, 30);
	std::cout << "Bureaucrat Grade =  " << a.getGrade() << " Form requested SignGrade = " << notSigned.getGradeSign() << std::endl;
	std::cout << "before signed " << notSigned;
	a.signedform(notSigned);
	std::cout << "after signed " << notSigned << std::endl << std::endl;

	/*Test already signed*/
	std::cout << GREEN << "TEST ALREADY SIGNED " << WHITE << std::endl;
	std::cout << "before signed " << FSigned;
	a.signedform(FSigned);
	std::cout << "after signed " << FSigned << std::endl << std::endl;

	/*test upgrade*/
	std::cout << GREEN << "TEST SIGNFORM : BRUREAUCRAT UPGRADE" << WHITE << std::endl;
	Bureaucrat up("upBureaucrat", 4);
	std::cout << "Bureaucrat Grade =  " << up.getGrade() << " Form requested SignGrade = " << notSigned.getGradeSign() << std::endl;
	std::cout << "before signed " << notSigned;
	up.signedform(notSigned);
	std::cout << "after signed " << notSigned << std::endl << std::endl;
	std::cout << "before upgrade " << up;
	up.incrementGrade();
	std::cout << "after upgrade " << up;
	up.signedform(notSigned);
	std::cout << "after signed " << notSigned << std::endl << std::endl;

	std::cout << BLUE << "*****************************Destroy*****************************" << WHITE <<std::endl;
	return (0);
}
