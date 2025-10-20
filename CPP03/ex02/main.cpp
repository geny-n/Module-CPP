/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:43:59 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/25 16:21:36 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
    std::cout << "***Constructor for ClapTrap****" <<std::endl;
    ClapTrap pikachu;
    ClapTrap evoli("Evoli");
    ClapTrap copy_clap = pikachu;

    std::cout <<std::endl << "***Constructor for ScavTrap***" <<std::endl;
    ScavTrap bulbizarre;
    ScavTrap carapuce("Carapuce");
    ScavTrap salameche("Salameche");
    ScavTrap copy_scav = bulbizarre;

    std::cout <<std::endl << "***Constructor for FragTrap***" <<std::endl;
    FragTrap tortipouss;
    FragTrap ouisticram("Ouisticram");
    FragTrap tiplouf("Tiplouf");
    FragTrap copy_frag = tortipouss;

    // std::cout << std::endl;
    // std::cout << "ph pikachu = " << pikachu.getEnergyPoints() << std::endl;
    // std::cout << "ph carapuce = " << carapuce.getEnergyPoints() << std::endl;
    // std::cout << "ph ouisticram = " << ouisticram.getEnergyPoints() << std::endl;

    std::cout << std::endl;
    std::cout << "Test with ClapTrap" << std::endl;
    pikachu.attack("Evoli");
    evoli.takeDamage(2);
    evoli.attack("Pikachu");
    pikachu.takeDamage(15);
    pikachu.attack("Evoli");
    evoli.beRepaired(50);

    std::cout << std::endl;
    std::cout << "Test with ScavTrap" << std::endl;
    salameche.attack("Carapus");
    carapuce.beRepaired(3);
    carapuce.guardGate();
    
    std::cout << std::endl;
    std::cout << "Test with FragTrap" << std::endl;
    tiplouf.attack("Ouisticram");
    ouisticram.takeDamage(10);
    ouisticram.highFivesGuys();

    std::cout << std::endl;
    return (0);
}