/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:22:57 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/29 11:38:06 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "iostream"
#include "Animal.hpp"

class Dog : public Animal
{
	public :
		Dog(void);
		Dog(const Dog& f1);
		Dog& operator=(const Dog& f);
		virtual ~Dog();
		virtual void makeSound() const;
};

#endif