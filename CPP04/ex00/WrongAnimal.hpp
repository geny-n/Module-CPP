/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:23:11 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/29 11:39:13 by ngeny            ###   ########.fr       */
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
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& f1);
		WrongAnimal& operator=(const WrongAnimal& f);
		virtual ~WrongAnimal();
		
		virtual void makeSound() const;
		std::string getType() const;
};

#endif