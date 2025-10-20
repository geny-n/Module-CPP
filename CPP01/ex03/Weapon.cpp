/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:36:16 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/08 13:36:17 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string type)
{
    this->_Type = type;
}

Weapon::~Weapon(void)
{

}

std::string Weapon::getType() const
{
    return (this->_Type);
}

void    Weapon::setType(std::string type)
{
    this->_Type = type;
}