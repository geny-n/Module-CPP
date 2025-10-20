/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:52:25 by ngeny             #+#    #+#             */
/*   Updated: 2025/05/24 18:09:56 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
    Bureaucrat bibi("bigboss", 2);
    Bureaucrat baba("moyenboss", 140);
    Bureaucrat bobo("littleboss", 150);
    
    Bureaucrat aa("bigboss", 2);
    Bureaucrat bb("moyenboss", 10);
    Bureaucrat cc("littleboss", 30);
    
    Bureaucrat aba("bigboss", 2);
    Bureaucrat obo("moyenboss", 50);
    Bureaucrat ibi("littleboss", 80);
    
    AForm *ptr_shrub1;
    AForm *ptr_shrub2;
    AForm *ptr_shrub3;
    AForm *ptr_shrub4;
    
	AForm *ptr_robot1;
    AForm *ptr_robot2;
    AForm *ptr_robot3;
    AForm *ptr_robot4;
    
    AForm *ptr_pres1;
    AForm *ptr_pres2;
    AForm *ptr_pres3;
    AForm *ptr_pres4;
    
    Intern intern;

    std::cout << std::endl << BLUE << "*****************************FORM*****************************" << WHITE <<std::endl;
    
    std::cout << std::endl << MAGENTA << "*****************************TEST SHRUBBERY*****************************" << WHITE <<std::endl;
    std::cout << std::endl << GREEN << "TEST Shrubbery SIGNED AND EXECUTED" << WHITE <<std::endl;
    ptr_shrub1 = intern.makeForm("ShrubberyCreationForm", "the_shru1");
    std::cout << *ptr_shrub1;
    bibi.signedAform(*ptr_shrub1);
    bibi.executeForm(*ptr_shrub1);
    std::cout << *ptr_shrub1;
    
    std::cout << std::endl << GREEN << "TEST Shrubbery SIGNED BUT NOT EXECUTED" << WHITE <<std::endl;
    ptr_shrub2 = intern.makeForm("ShrubberyCreationForm", "the_shru2");
    std::cout << *ptr_shrub2;
    baba.signedAform(*ptr_shrub2);
    baba.executeForm(*ptr_shrub2);
    std::cout << *ptr_shrub2;
    
    std::cout << std::endl << GREEN << "TEST Shrubbery NOT SIGNED AND NOT EXECUTED" << WHITE <<std::endl;
    ptr_shrub3 = intern.makeForm("ShrubberyCreationForm", "the_shru3");
    std::cout << *ptr_shrub3;
    bobo.signedAform(*ptr_shrub3);
    bobo.executeForm(*ptr_shrub3);
    std::cout << *ptr_shrub3;
    
    std::cout << std::endl << GREEN << "TEST Shrubbery EXECUTE BEFORE SIGNED" << WHITE <<std::endl;
    ptr_shrub4 = intern.makeForm("ShrubberyCreationForm", "the_shru4");
    std::cout << *ptr_shrub4;
    bibi.executeForm(*ptr_shrub4);
    bibi.signedAform(*ptr_shrub4);
    std::cout << *ptr_shrub4;

    std::cout << std::endl << MAGENTA << "*****************************TEST PRESIDENT*****************************" << WHITE <<std::endl;
    /*test president signed and executed*/
    std::cout << std::endl << GREEN << "TEST PRESIDENT SIGNED AND EXECUTED" << WHITE <<std::endl;
    ptr_pres1 = intern.makeForm("PresidentialPardonForm", "the_pres1");
    // std::cout << "Bureaucrat Grade =  " << aa.getGrade() << " Form requested SignGrade = " << ptr_pres1.getGradeSign() << " Form requested ExecGrade = " << ptr_pres1.getGradeExec()<< std::endl;
    std::cout << *ptr_pres1;
    aa.signedAform(*ptr_pres1);
    std::cout << *ptr_pres1;
    aa.executeForm(*ptr_pres1);
    
    /*test president signed but not executed*/
    std::cout << std::endl << GREEN << "TEST PRESIDENT SIGNED BUT NOT EXECUTED" << WHITE <<std::endl;
    ptr_pres2 = intern.makeForm("PresidentialPardonForm", "the_pres2");
    // std::cout << "Bureaucrat Grade =  " << aa.getGrade() << " Form requested SignGrade = " << ptr_pres2.getGradeSign() << " Form requested ExecGrade = " << ptr_pres2.getGradeExec()<< std::endl;
    std::cout << *ptr_pres2;
    bb.signedAform(*ptr_pres2);
    std::cout << *ptr_pres2;
    bb.executeForm(*ptr_pres2);
    
    /*test president not signed and not executed*/
    std::cout << std::endl << GREEN << "TEST PRESIDENT NOT SIGNED AND NOT EXECUTED" << WHITE <<std::endl;
    ptr_pres3 = intern.makeForm("PresidentialPardonForm", "the_pres3");
    // std::cout << "Bureaucrat Grade =  " << aa.getGrade() << " Form requested SignGrade = " << ptr_pres3.getGradeSign() << " Form requested ExecGrade = " << ptr_pres3.getGradeExec()<< std::endl;
    std::cout << *ptr_pres3;
    cc.signedAform(*ptr_pres3);
    std::cout << *ptr_pres3;
    cc.executeForm(*ptr_pres3);

    /*test president try to execute before signed*/
    std::cout << std::endl << GREEN << "TEST PRESIDENT EXECUTE BEFORE SIGNED" << WHITE <<std::endl;
    ptr_pres4 = intern.makeForm("PresidentialPardonForm", "the_pres4");
    // std::cout << "Bureaucrat Grade =  " << aa.getGrade() << " Form requested SignGrade = " << pres4.getGradeSign() << " Form requested ExecGrade = " << pres4.getGradeExec()<< std::endl;
    std::cout << *ptr_pres4;
    aa.executeForm(*ptr_pres4);
    aa.signedAform(*ptr_pres4);
    std::cout << *ptr_pres4;

    
    std::cout << std::endl << MAGENTA << "*****************************TEST ROBOTOMY*****************************" << WHITE <<std::endl;
    /*test robotomy signed but not executed*/
    std::cout << std::endl << GREEN << "TEST ROBOTOMY SIGNED BUT NOT EXECUTED" << WHITE <<std::endl;
    // std::cout << "Bureaucrat Grade =  " << obo.getGrade() << " Form requested SignGrade = " << robot2.getGradeSign() << " Form requested ExecGrade = " << robot2.getGradeExec()<< std::endl;
    ptr_robot2 = intern.makeForm("RobotomyRequestForm", "the_robot2");
    std::cout << *ptr_robot2;
    obo.signedAform(*ptr_robot2);
    std::cout << *ptr_robot2;
    obo.executeForm(*ptr_robot2);
    
    /*test robotomy not signed and not executed*/
    std::cout << std::endl << GREEN << "TEST ROBOTOMY NOT SIGNED AND NOT EXECUTED" << WHITE <<std::endl;
    // std::cout << "Bureaucrat Grade =  " << ibi.getGrade() << " Form requested SignGrade = " << robot3.getGradeSign() << " Form requested ExecGrade = " << robot3.getGradeExec()<< std::endl;
    ptr_robot3 = intern.makeForm("RobotomyRequestForm", "the_robot3");
    std::cout << *ptr_robot3;
    ibi.signedAform(*ptr_robot3);
    std::cout << *ptr_robot3;
    ibi.executeForm(*ptr_robot3);

    /*test robotomy try to execute before signed*/
    std::cout << std::endl << GREEN << "TEST ROBOTOMY EXECUTE BEFORE SIGNED" << WHITE <<std::endl;
    // std::cout << "Bureaucrat Grade =  " << aba.getGrade() << " Form requested SignGrade = " << robot4.getGradeSign() << " Form requested ExecGrade = " << robot4.getGradeExec()<< std::endl;
    ptr_robot4 = intern.makeForm("RobotomyRequestForm", "the_robot4");
    std::cout << *ptr_robot4;
    aba.executeForm(*ptr_robot4);
    aba.signedAform(*ptr_robot4);
    std::cout << *ptr_robot4;
    
    /*test robotomy*/
    std::cout << std::endl << GREEN << "TEST ROBOTOMY SIGNED AND EXECUTE" << WHITE <<std::endl;
    ptr_robot1 = intern.makeForm("RobotomyRequestForm", "the_robot1");
    aba.signedAform(*ptr_robot1);
	int i = 1;
	while (i < 10)
    {
        aba.executeForm(*ptr_robot1);
        i++;
    }
    
    std::cout << std::endl << BLUE << "*****************************Destroy*****************************" << WHITE <<std::endl;
    delete (ptr_shrub1);
    delete (ptr_shrub2);
    delete (ptr_shrub3);
    delete (ptr_shrub4);
    
    delete (ptr_pres1);
    delete (ptr_pres2);
    delete (ptr_pres3);
    delete (ptr_pres4);
    
    delete (ptr_robot1);
    delete (ptr_robot2);
    delete (ptr_robot3);
    delete (ptr_robot4);

	return (0);
}
