/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:29:11 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/08 15:17:05 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void)
{
    
}

Zombie::Zombie (std::string name)
{
    this->_Name = name;
}

Zombie::~Zombie (void)
{
    std::cout << "The Zombie named " << this->_Name << " has been destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << "The Zombie " << this->_Name << " is born !!" << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->_Name = name;
}
