/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:52:25 by ngeny             #+#    #+#             */
/*   Updated: 2025/05/26 15:55:13 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
    
    ShrubberyCreationForm shrub1("ShrubTarget1");
    ShrubberyCreationForm shrub2("ShrubTarget2");
    ShrubberyCreationForm shrub3("ShrubTarget3");
    ShrubberyCreationForm shrub4("ShrubTarget4");
    
	RobotomyRequestForm robot1("roboTarget1");
    RobotomyRequestForm robot2("roboTarget2");
    RobotomyRequestForm robot3("roboTarget3");
    RobotomyRequestForm robot4("roboTarget4");
    
    PresidentialPardonForm pres1("presidentTarget1");
    PresidentialPardonForm pres2("presidentTarget2");
    PresidentialPardonForm pres3("presidentTarget3");
    PresidentialPardonForm pres4("presidentTarget4");
    
    std::cout << std::endl << BLUE << "*****************************FORM*****************************" << WHITE <<std::endl;
    
    std::cout << std::endl << MAGENTA << "*****************************TEST SHRUBBERY*****************************" << WHITE <<std::endl;
    /*test Shrubbery signed and executed*/
    std::cout << std::endl << GREEN << "TEST Shrubbery SIGNED AND EXECUTED" << WHITE <<std::endl;
    std::cout << "Bureaucrat Grade =  " << bibi.getGrade() << " Form requested SignGrade = " << shrub1.getGradeSign() << " Form requested ExecGrade = " << shrub1.getGradeExec()<< std::endl;
    std::cout << shrub1;
    bibi.signedAform(shrub1);
    std::cout << shrub1;
    bibi.executeForm(shrub1);
    
    /*test Shrubbery signed but not executed*/
    std::cout << std::endl << GREEN << "TEST Shrubbery SIGNED BUT NOT EXECUTED" << WHITE <<std::endl;
    std::cout << "Bureaucrat Grade =  " << baba.getGrade() << " Form requested SignGrade = " << shrub2.getGradeSign() << " Form requested ExecGrade = " << shrub2.getGradeExec()<< std::endl;
    std::cout << shrub2;
    baba.signedAform(shrub2);
    std::cout << shrub2;
    baba.executeForm(shrub2);
    
    /*test Shrubbery not signed and not executed*/
    std::cout << std::endl << GREEN << "TEST Shrubbery NOT SIGNED AND NOT EXECUTED" << WHITE <<std::endl;
    std::cout << "Bureaucrat Grade =  " << bobo.getGrade() << " Form requested SignGrade = " << shrub3.getGradeSign() << " Form requested ExecGrade = " << shrub3.getGradeExec()<< std::endl;
    std::cout << shrub3;
    bobo.signedAform(shrub3);
    std::cout << shrub3;
    bobo.executeForm(shrub3);

    /*test Shrubbery try to execute before signed*/
    std::cout << std::endl << GREEN << "TEST Shrubbery EXECUTE BEFORE SIGNED" << WHITE <<std::endl;
    std::cout << "Bureaucrat Grade =  " << bibi.getGrade() << " Form requested SignGrade = " << shrub4.getGradeSign() << " Form requested ExecGrade = " << shrub4.getGradeExec()<< std::endl;
    std::cout << shrub4;
    bibi.executeForm(shrub4);
    bibi.signedAform(shrub4);
    std::cout << shrub4;
    
    
    std::cout << std::endl << MAGENTA << "*****************************TEST PRESIDENT*****************************" << WHITE <<std::endl;
    /*test president signed and executed*/
    std::cout << std::endl << GREEN << "TEST PRESIDENT SIGNED AND EXECUTED" << WHITE <<std::endl;
    std::cout << "Bureaucrat Grade =  " << aa.getGrade() << " Form requested SignGrade = " << pres1.getGradeSign() << " Form requested ExecGrade = " << pres1.getGradeExec()<< std::endl;
    std::cout << pres1;
    aa.signedAform(pres1);
    std::cout << pres1;
    aa.executeForm(pres1);
    
    /*test president signed but not executed*/
    std::cout << std::endl << GREEN << "TEST PRESIDENT SIGNED BUT NOT EXECUTED" << WHITE <<std::endl;
    std::cout << "Bureaucrat Grade =  " << bb.getGrade() << " Form requested SignGrade = " << pres2.getGradeSign() << " Form requested ExecGrade = " << pres2.getGradeExec()<< std::endl;
    std::cout << pres2;
    bb.signedAform(pres2);
    std::cout << pres2;
    bb.executeForm(pres2);
    
    /*test president not signed and not executed*/
    std::cout << std::endl << GREEN << "TEST PRESIDENT NOT SIGNED AND NOT EXECUTED" << WHITE <<std::endl;
    std::cout << "Bureaucrat Grade =  " << cc.getGrade() << " Form requested SignGrade = " << pres3.getGradeSign() << " Form requested ExecGrade = " << pres3.getGradeExec()<< std::endl;
    std::cout << pres3;
    cc.signedAform(pres3);
    std::cout << pres3;
    cc.executeForm(pres3);

    /*test president try to execute before signed*/
    std::cout << std::endl << GREEN << "TEST PRESIDENT EXECUTE BEFORE SIGNED" << WHITE <<std::endl;
    std::cout << "Bureaucrat Grade =  " << aa.getGrade() << " Form requested SignGrade = " << pres4.getGradeSign() << " Form requested ExecGrade = " << pres4.getGradeExec()<< std::endl;
    std::cout << pres4;
    aa.executeForm(pres4);
    aa.signedAform(pres4);
    std::cout << pres4;
    
    std::cout << std::endl << MAGENTA << "*****************************TEST ROBOTOMY*****************************" << WHITE <<std::endl;
    
    /*test robotomy signed but not executed*/
    std::cout << std::endl << GREEN << "TEST ROBOTOMY SIGNED BUT NOT EXECUTED" << WHITE <<std::endl;
    std::cout << "Bureaucrat Grade =  " << obo.getGrade() << " Form requested SignGrade = " << robot2.getGradeSign() << " Form requested ExecGrade = " << robot2.getGradeExec()<< std::endl;
    std::cout << robot2;
    obo.signedAform(robot2);
    std::cout << robot2;
    obo.executeForm(robot2);
    
    /*test robotomy not signed and not executed*/
    std::cout << std::endl << GREEN << "TEST ROBOTOMY NOT SIGNED AND NOT EXECUTED" << WHITE <<std::endl;
    std::cout << "Bureaucrat Grade =  " << ibi.getGrade() << " Form requested SignGrade = " << robot3.getGradeSign() << " Form requested ExecGrade = " << robot3.getGradeExec()<< std::endl;
    std::cout << robot3;
    ibi.signedAform(robot3);
    std::cout << robot3;
    ibi.executeForm(robot3);

    /*test robotomy try to execute before signed*/
    std::cout << std::endl << GREEN << "TEST ROBOTOMY EXECUTE BEFORE SIGNED" << WHITE <<std::endl;
    std::cout << "Bureaucrat Grade =  " << aba.getGrade() << " Form requested SignGrade = " << robot4.getGradeSign() << " Form requested ExecGrade = " << robot4.getGradeExec()<< std::endl;
    std::cout << robot4;
    aba.executeForm(robot4);
    aba.signedAform(robot4);
    std::cout << robot4;
    
    /*test robotomy*/
    std::cout << std::endl << GREEN << "TEST ROBOTOMY SIGNED AND EXECUTE" << WHITE <<std::endl;
	aba.signedAform(robot1);
	int i = 1;
	while (i < 10)
    {
        aba.executeForm(robot1);
        i++;
    }
	std::cout << BLUE << "*****************************Destroy*****************************" << WHITE <<std::endl;
	return (0);
}
