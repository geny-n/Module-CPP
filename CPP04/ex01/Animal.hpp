/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:38:06 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/29 10:38:07 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "iostream"
#include "string"
#include "Brain.hpp"

class Animal
{
	protected :
		std::string _Type;
		// Brain *_Brain;
	public :
		Animal(void);//constructeur default
		Animal(const Animal& f1); //constructeur de recopie
		Animal& operator=(const Animal& f);
		virtual ~Animal();
		
		virtual void makeSound() const;
		std::string getType() const;
		virtual Brain *getBrain(void) const = 0;
};

#endif