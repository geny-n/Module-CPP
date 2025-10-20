/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:37:15 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/25 16:07:50 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap :: ScavTrap(void) : ClapTrap()
{
    std::cout << "ScavTrap Default constructor called a wild " << this->_Name << std::endl;
    this->_HP = 100;
    this->_Energy = 50;
    this->_Attack = 20;
}

ScavTrap :: ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Constructor called " << this->_Name << std::endl;
    this->_HP = 100;
    this->_Energy = 50;
    this->_Attack = 20;
}

ScavTrap :: ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap Constructor copy called " << copy._Name << std::endl;
    *this = copy;
}
ScavTrap& ScavTrap :: operator=(const ScavTrap& f)
{
    std::cout << "ScavTrap Copy assignment operator called " << f._Name << std::endl;
    this->_Name = f._Name;
    this->_HP =  f._HP;
    this->_Attack = f._Attack;
    this->_Energy = f._Energy;
    return (*this);
}

ScavTrap :: ~ScavTrap(void)
{
    std::cout << "ScavTrap " << this->_Name << " is destroyed" << std::endl;
}


void ScavTrap :: attack(const std::string& target)
{
    if (this->_Energy <= 0 || this->_HP <= 0)
        std::cout << "ScavTrap " << this->_Name << " can't attack" << std::endl; 
    else
    {
        std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack << " points of damage! ";
        this->_Energy -= 1;
        std::cout << "Energy left : " << this->_Energy << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_Name << " is now in Gate keeper mode" << std::endl;
}
