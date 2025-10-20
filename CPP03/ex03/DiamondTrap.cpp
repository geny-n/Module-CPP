/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:53:59 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/25 16:27:13 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), FragTrap(), ScavTrap(), _Name("Diamond")
{
    std::cout << "DiamondTrap Default constructor called " << this->_Name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), FragTrap(), ScavTrap()
{
    this->_Name = name;
    std::cout << "DiamondTrap Constructor called " << this->_Name << std::endl;
    ClapTrap::_Name = name + "_clap_name";
    this->_Attack = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
    std::cout << "DiamondTrap Copy Constructor called for " << copy._Name << std::endl;
    *this = copy;
}
DiamondTrap& DiamondTrap :: operator=(const DiamondTrap& f)
{
    std::cout << "DiamondTrap Copy assignment operator called " << f._Name << std::endl;
    this->_Name = f._Name;
    ClapTrap::_Name = f._Name + "_clap_name";
    this->_HP =  f._HP;
    this->_Attack = f._Attack;
    this->_Energy = f._Energy;
    return (*this);
}

DiamondTrap :: ~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << this->_Name << " is destroyed" << std::endl;
}


void DiamondTrap :: attack(const std::string& target)
{
    if (this->_Energy <= 0 || this->_HP <= 0)
        std::cout << "DiamondTrap " << this->_Name << " can't attack" << std::endl; 
    else
    {
        std::cout << "DiamondTrap " << this->_Name << " attacks as a ScavTrap" << std::endl; 
        ScavTrap::attack(target);
    }
        
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "My Diamond name is " << this->_Name << " and my Clap Name is " << ClapTrap::_Name << std::endl;
}
std::string DiamondTrap::getName() const 
{
    return this->_Name;
}

unsigned int DiamondTrap::getHP() const 
{
    return this->_HP;
}

unsigned int DiamondTrap::getEnergyPoints() const 
{
    return this->_Energy;
}

unsigned int DiamondTrap::getAttack() const 
{
    return this->_Attack;
}