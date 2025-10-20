/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:35:40 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/08 13:35:41 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private :
        std::string _Name;
        Weapon  *_Weapon;
    public :
        HumanB(std::string name);
        ~HumanB(void);
        
        void    attack();
        void    setWeapon(Weapon &weapon);
};

#endif