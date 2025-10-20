/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:56:11 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/24 20:56:12 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "iostream"

class ClapTrap
{
    protected :
        std::string _Name;
        unsigned int _HP;
        unsigned int _Energy;
        unsigned int _Attack;
    
    public :
        ClapTrap(void);
        ClapTrap(const ClapTrap& copy);
        ClapTrap(std::string name);
        ClapTrap& operator=(const ClapTrap& f);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName() const;
};
#endif