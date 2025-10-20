/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:43:55 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/23 09:46:55 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "iostream"
#include  "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap(void);
        FragTrap(const FragTrap& copy);
        FragTrap(std::string name);
        FragTrap& operator=(const FragTrap& f);
        ~FragTrap(void);
        void attack(const std::string& target);
        void highFivesGuys();
};
#endif