/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:56:59 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/24 20:57:00 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "iostream"
#include  "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    public :
        FragTrap(void);
        FragTrap(const FragTrap& copy);
        FragTrap(std::string name);
        FragTrap& operator=(const FragTrap& f);
        ~FragTrap(void);
        void attack(const std::string& target);
        void highFiveGuys();
};
#endif