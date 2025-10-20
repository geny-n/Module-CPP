/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:18:12 by ngeny             #+#    #+#             */
/*   Updated: 2025/06/03 03:37:39 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	std::cout << "Serializer default constructor" << std::endl;
}
Serializer::Serializer( Serializer const &copy)
{
	std::cout << "Serializer copy constructor" << std::endl;
	*this = copy;
}
Serializer &Serializer::operator=(const Serializer& f)
{
	std::cout << "Serializer copy assignment constructor called" << std::endl;
	(void)f;
	return (*this);
}

Serializer::~Serializer(void)
{
	std::cout << "Serializer destructor" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}