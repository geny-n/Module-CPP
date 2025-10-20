/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:57:55 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/24 20:57:56 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "iostream"
#include  "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
    public :
        ScavTrap(void);
        ScavTrap(const ScavTrap& copy);
        ScavTrap(std::string name);
        ScavTrap& operator=(const ScavTrap& f);
        ~ScavTrap(void);
        void attack(const std::string& target);
        void guardGate();
};
#endif