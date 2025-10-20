/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:33:19 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/23 09:33:20 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
    ClapTrap tiplouf;
    ClapTrap pikachu("Pikachu");
    ClapTrap copy = tiplouf;

    std::cout << std::endl;
    pikachu.attack("Tiplouf");
    copy.takeDamage(2);
    copy.attack("Pikachu");
    pikachu.takeDamage(15);
    pikachu.attack("Tiplouf");
    copy.beRepaired(50);
    std::cout << std::endl;
    return (0);
}