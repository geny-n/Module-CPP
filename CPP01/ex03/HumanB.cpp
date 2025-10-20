/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:35:30 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/08 13:35:34 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_Name = name;
}

HumanB::~HumanB(void)
{
    
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_Weapon = &weapon;
}

void    HumanB::attack(void) 
{
    std::cout << this->_Name << " attacks with their " << this->_Weapon->getType() << std::endl;
}
