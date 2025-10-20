/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:13:30 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/01 19:13:31 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name)
{
    this->_Name = name;
}

Zombie::~Zombie(void)
{
    std::cout << "the Zombie " << this->_Name <<" has been destroyed" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->_Name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}