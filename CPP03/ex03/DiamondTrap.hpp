/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:56:19 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/24 20:56:20 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIQMONDTRAP_HPP
#define DIQMONDTRAP_HPP

#include "iostream"
#include  "FragTrap.hpp"
#include  "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private :
        std::string _Name;

    public :
        DiamondTrap(void);
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap(std::string name);
        DiamondTrap& operator=(const DiamondTrap& f);
        ~DiamondTrap(void);
        void attack(const std::string& target);
        void whoAmI();

        std::string getName() const;
        unsigned int getHP() const;
        unsigned int getEnergyPoints() const;
        unsigned int getAttack() const;
};
#endif