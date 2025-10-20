/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:29:18 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/08 14:59:02 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zomb = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        zomb[i].set_name(name);
        zomb[i].announce();
        i++;
    }
    return (zomb);
}