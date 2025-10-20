/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:18:54 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/29 11:18:55 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "iostream"
#include "string"

class WrongAnimal
{
	protected :
		std::string _Type;
	public :
		WrongAnimal(void);//constructeur default
		WrongAnimal(const WrongAnimal& f1); //constructeur de recopie
		WrongAnimal& operator=(const WrongAnimal& f);
		virtual ~WrongAnimal();
		
		void makeSound() const;
		std::string getType() const;
};

#endif