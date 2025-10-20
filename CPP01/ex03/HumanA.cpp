/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:35:23 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/08 13:35:24 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _Weapon(weapon)
{
    this->_Name = name;
}

HumanA::~HumanA(void)
{
    
}

void    HumanA::attack(void) 
{
    std::cout << this->_Name << " attacks with their " << this->_Weapon.getType() << std::endl;
}

