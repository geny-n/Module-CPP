/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:25:38 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/24 20:57:15 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main (void)
{
    /* TEST CONSTRUCTORS */
    DiamondTrap D("Snoppy");
    std::cout << std::endl;
    DiamondTrap D_copy(D);
    std::cout << std::endl;
    DiamondTrap D_assign;
    std::cout << std::endl;
    D_assign= D_copy;
    std::cout << std::endl;
    std::cout << std::endl;
    
    std::cout << "DiamondTrap D name = " << D.getName() << std::endl;    
    std::cout << "DiamondTrap D_copy name = " << D_copy.getName() << std::endl; 
    std::cout << "DiamondTrap D_assign name = " << D_assign.getName()<< std::endl; 

    std::cout << "ClapTrap D name = " << D.ClapTrap::getName() << std::endl;    
    std::cout << "ClapTrap D_copy name = " << D_copy.ClapTrap::getName() << std::endl; 
    std::cout << "ClapTrap D_assign name = " << D_assign.ClapTrap::getName()<< std::endl; 

    
    std::cout << "DiamondTrap D HP = " << D.getHP() << std::endl;    
    std::cout << "DiamondTrap D_copy HP = " << D_copy.getHP() << std::endl; 
    std::cout << "DiamondTrap D_assign HP = " << D_assign.getHP()<< std::endl; 
    std::cout << "DiamondTrap D Energy = " << D.getEnergyPoints() << std::endl;    
    std::cout << "DiamondTrap D_copy Energy = " << D_copy.getEnergyPoints() << std::endl; 
    std::cout << "DiamondTrap D_assign Energy = " << D_assign.getEnergyPoints()<< std::endl; 
    std::cout << "DiamondTrap D Attack Damages = " << D.getAttack() << std::endl;    
    std::cout << "DiamondTrap D_copy Attack Damages = " << D_copy.getAttack() << std::endl; 
    std::cout << "DiamondTrap D_assign Attack Damages = " << D_assign.getAttack() << std::endl; 
    
    std::cout << std::endl;
    std::cout << std::endl;
    
    /* TEST OTHERS MEMBER FUNCTIONS */
    D.beRepaired(111);
	D.takeDamage(99);	
    D.highFiveGuys();
    D.guardGate();

    std::cout << std::endl;
    std::cout << std::endl;
    /* TEST ATTACK */
    D.attack("Dumbo");
    D.attack("Dumbo");
    D.attack("Dumbo");
    D.takeDamage(500);	
    D.attack("Dumbo");

    std::cout << std::endl;
    std::cout << std::endl;
    /* TEST WHOIAM */
    D.whoAmI();
    D_copy.whoAmI();
    D_assign.whoAmI();
    std::cout << std::endl;
    std::cout << std::endl;
    return (0);
}