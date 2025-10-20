/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:18:27 by ngeny             #+#    #+#             */
/*   Updated: 2025/06/02 15:00:27 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

typedef struct s_data
{
	int value;
    std::string name;
} Data;

class Serializer
{
	private :

	public :
		Serializer (void);
		Serializer( Serializer const &copy);
		Serializer& operator=(const Serializer& f);
		~Serializer(void);
		
		static	uintptr_t serialize(Data* ptr);
		static	Data* deserialize(uintptr_t raw);
};
#endif