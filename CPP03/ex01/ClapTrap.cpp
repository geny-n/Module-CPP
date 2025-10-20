/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:37:01 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/25 16:07:35 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap :: ClapTrap(void) : _Name("NoName"), _HP(10), _Energy(10), _Attack(0)
{
    std::cout << "ClapTrap Default constructor called a wild " << this->_Name << std::endl;
}

ClapTrap :: ClapTrap(std::string name) : _Name(name), _HP(10), _Energy(10), _Attack(0)
{
    std::cout << "ClapTrap Constructor called " << this->_Name << std::endl;
}

ClapTrap :: ClapTrap(const ClapTrap& copy)
{
    std::cout << "ClapTrap Constructor copy called " << copy._Name << std::endl;
    *this = copy;
}
ClapTrap& ClapTrap :: operator=(const ClapTrap& f)
{
    std::cout << "ClapTrap Copy assignment operator called " << f._Name << std::endl;
    this->_Name = f._Name;
    this->_HP =  f._HP;
    this->_Attack = f._Attack;
    this->_Energy = f._Energy;
    return (*this);
}

ClapTrap :: ~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->_Name << " is destroyed" << std::endl;
}


void ClapTrap :: attack(const std::string& target)
{
    if (this->_Energy <= 0 || this->_HP <= 0)
        std::cout << "ClapTrap " << this->_Name << " can't attack" << std::endl; 
    else
    {
        std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack << " points of damage! ";
        this->_Energy -= 1;
        std::cout << "Energy left : " << this->_Energy << std::endl;
    }
}
void ClapTrap :: takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_Name << " takes " << amount << " of dammage";
    
    if (amount >= this->_HP)
    {
        std::cout << std::endl << this->_Name << " died" << std::endl;
        this->_HP = 0;
    }
    else
    {
        this->_HP -= amount;
        std::cout << " and has " << this->_HP << " HP left" <<std::endl;
    }
}

void ClapTrap :: beRepaired(unsigned int amount)
{
    if (this->_Energy <= 0 || this->_HP <= 0)
        std::cout << "ClapTrap " << this->_Name << " can't use heal" << std::endl;
    else
    {
        this->_HP += amount;
        this->_Energy -= 1;;
        std::cout << "ClapTrap " << this->_Name << " use heal and gets +" << amount << " HP" <<std::endl;
        std::cout << this->_Name << " has " << this->_HP << " HP left and " << this->_Energy << " Energy left" <<std::endl;
    }
}

// unsigned int ClapTrap::getHitPoints() const {
//     return this->_HP;
// }