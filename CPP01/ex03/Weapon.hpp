/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:36:30 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/08 13:36:31 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "iostream"

class Weapon
{
    private :
        std::string _Type;
    
    public :
        Weapon(void);
        Weapon(std::string type);
        ~Weapon(void);
        std::string getType() const;
        void        setType(std::string type);
};

#endif

