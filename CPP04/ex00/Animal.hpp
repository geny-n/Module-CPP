/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:22:44 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/29 10:23:32 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "iostream"
#include "string"

class Animal
{
	protected :
		std::string _Type;
	public :
		Animal(void);
		Animal(const Animal& f1);
		Animal& operator=(const Animal& f);
		virtual ~Animal();
		
		virtual void makeSound() const;
		std::string getType() const;
};

#endif