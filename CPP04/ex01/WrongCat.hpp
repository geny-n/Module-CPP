/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:19:10 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/29 11:41:54 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "iostream"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
		WrongCat(void);//constructeur default
		WrongCat(const WrongCat& f1); //constructeur de recopie
		WrongCat& operator=(const WrongCat& f);
		~WrongCat();
		virtual void makeSound() const;
};

#endif