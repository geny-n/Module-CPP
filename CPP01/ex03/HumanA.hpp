/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:35:27 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/08 15:44:59 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private :
        std::string _Name;
        Weapon  &_Weapon;
    
    public :
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);

        void    attack();
};

#endif
