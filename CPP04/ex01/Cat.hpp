/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:51:06 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/29 11:51:07 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "iostream"
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private :
		Brain *_Brain;
	public :
		Cat(void);//constructeur default
		Cat(const Cat& f1); //constructeur de recopie
		Cat& operator=(const Cat& f);
		~Cat();
		virtual void makeSound() const;
		Brain *getBrain(void) const;
};

#endif