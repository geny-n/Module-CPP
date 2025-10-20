/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:52:00 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/29 11:52:01 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "iostream"
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain *_Brain;
	public :
		Dog(void);//constructeur default
		Dog(const Dog& f1); //constructeur de recopie
		Dog& operator=(const Dog& f);
		~Dog();
		virtual void makeSound() const;
		Brain *getBrain(void) const;
};

#endif