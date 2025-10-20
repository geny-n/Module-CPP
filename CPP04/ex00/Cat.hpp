/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:22:51 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/29 11:38:02 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "iostream"
#include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat(void);
		Cat(const Cat& f1);
		Cat& operator=(const Cat& f);
		virtual ~Cat();
		virtual void makeSound() const;
};

#endif