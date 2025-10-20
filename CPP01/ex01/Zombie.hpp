/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:29:15 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/08 14:58:26 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private :
        std::string _Name;

    public :
        Zombie(void);
        Zombie (std::string name);
        ~Zombie(void);

        void announce(void);
        void set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif