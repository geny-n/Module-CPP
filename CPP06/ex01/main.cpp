/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 03:39:50 by ngeny             #+#    #+#             */
/*   Updated: 2025/06/03 03:39:50 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data originalData;
	originalData.value  = 42;
	originalData.name = "TOTO";

    std::cout << "STARTING CONFIGURATION" << std::endl;
    std::cout << "Value: " << originalData.value << ", Name: " << originalData.name << std::endl;
    std::cout << std::endl;

    std::cout << "SERIALIZED CONFIGURATION" << std::endl;
    // uintptr_t est un unsigned integer qui contient le pointeur converti en entier
    uintptr_t uip = Serializer::serialize(&originalData);
    std::cout << "uintptr_t : " << uip << std::endl;
    std::cout << std::endl;

    std::cout << "DESERIALIZED CONFIGURATION" << std::endl;
    Data* deserializedData = Serializer::deserialize(uip);
    std::cout << "deserialized Data : " << deserializedData << std::endl;
    if (deserializedData == &originalData)
    {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "Value: " << deserializedData->value << ", Name: " << deserializedData->name << std::endl;
    }
    else
        std::cout << "Serialization and deserialization failed!" << std::endl;

    return 0;
}

