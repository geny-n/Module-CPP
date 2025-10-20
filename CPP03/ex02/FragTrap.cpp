/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:43:50 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/25 16:16:30 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap :: FragTrap(void) : ClapTrap()
{
    std::cout << "FragTrap Default constructor called a wild " << this->_Name << std::endl;
    this->_HP = 100;
    this->_Energy = 100;
    this->_Attack = 30;
}

FragTrap :: FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Constructor called " << this->_Name << std::endl;
    this->_HP = 100;
    this->_Energy = 100;
    this->_Attack = 30;
}

FragTrap :: FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "FragTrap Constructor copy called " << copy._Name << std::endl;
    *this = copy;
}
FragTrap& FragTrap :: operator=(const FragTrap& f)
{
    std::cout << "FragTrap Copy assignment operator called " << f._Name << std::endl;
    this->_Name = f._Name;
    this->_HP =  f._HP;
    this->_Attack = f._Attack;
    this->_Energy = f._Energy;
    return (*this);
}

FragTrap :: ~FragTrap(void)
{
    std::cout << "FragTrap " << this->_Name << " is destroyed" << std::endl;
}


void FragTrap :: attack(const std::string& target)
{
    if (this->_Energy <= 0 || this->_HP <= 0)
        std::cout << "FragTrap " << this->_Name << " can't attack" << std::endl; 
    else
    {
        std::cout << "FragTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack << " points of damage! ";
        this->_Energy -= 1;
        std::cout << "Energy left : " << this->_Energy << std::endl;
    }
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->_Name << " gives a high-five to his opponent" << std::endl;
}
