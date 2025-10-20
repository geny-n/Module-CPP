/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:37:08 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/23 09:37:09 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main (void)
{
    ClapTrap pikachu;
    ClapTrap evoli("Evoli");
    ClapTrap copy_clap = pikachu;

    ScavTrap bulbizarre;
    ScavTrap carapuce("Carapuce");
    ScavTrap salameche("Salameche");
    ScavTrap copy_scav = bulbizarre;

    // std::cout << std::endl;
    // std::cout << "ph pikachu = " << pikachu.getHitPoints() << std::endl;
    // std::cout << "ph carapuce = " << carapuce.getHitPoints() << std::endl;

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
    return (0);
}