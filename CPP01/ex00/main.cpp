/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:08:31 by aperez-b          #+#    #+#             */
/*   Updated: 2025/04/08 15:07:00 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
    /*******class constructor Zombie*******/
    Zombie zomb("zomb0");
    zomb.announce();
    
    /*******function no memember of the class*******/
    Zombie *z1 = newZombie("zomb1");
    z1->announce();
    delete(z1);
    
    /*******function no memember of the class*******/
    randomChump("zomb2");
    
    return (0);
}
