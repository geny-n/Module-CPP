/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:13:33 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/01 19:13:34 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
        std::string _Name;

    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);
        void    announce(void);

        // Zombie* newZombie( std::string name );

};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif