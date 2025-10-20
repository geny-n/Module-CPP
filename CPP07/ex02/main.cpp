/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:29:25 by ngeny             #+#    #+#             */
/*   Updated: 2025/06/17 19:59:47 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

/*
#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}*/


int main()
{
    std::cout << std::endl << MAGENTA << "************Test constructeur by default************" << WHITE <<std::endl;
    Array<int> a;

    std::cout << ">>> Taille du tableau : " << a.size() << std::endl;
    try {
        std::cout << ">>> Tentative d’accès à l’index 0..." << std::endl;
        std::cout << a[0] << std::endl; // Devrait lancer une exception
    } catch (const std::exception& e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }

    
    std::cout << std::endl << MAGENTA << "************Test constructeur table of int************" << WHITE <<std::endl;
    Array<int> intArray(3);
    try
    {
		std::cout << "int array size: " << intArray.size() << std::endl;
		for (unsigned int i = 0; i < intArray.size(); i++)
			intArray[i] = i;
		for (unsigned int i = 0; i < intArray.size(); i++)
			std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        std::cout << CYAN << "\n>>> Test d’accès hors limites" << WHITE << std::endl;
		std::cout << "intArray[5] = " << intArray[5] << std::endl;
	}
    catch(const std::exception& e)
    {
    	std::cerr << "test int Exception caught: " << e.what() << std::endl;
    }

    
    std::cout << std::endl << MAGENTA << "************Test constructeur table of char************" << WHITE <<std::endl;
    Array<char> charArray(3);
    try
    {
        std::cout << "char array size: " << charArray.size() << std::endl;
		for (unsigned int i = 0; i < charArray.size(); i++)
			charArray[i] = 'A' + i;
		for (unsigned int i = 0; i < charArray.size(); i++)
			std::cout << "charArray[" << i << "] = " << charArray[i] << std::endl;
        std::cout << CYAN << "\n>>> Test d’accès hors limites" << WHITE << std::endl;
		std::cout << "charArray[9] = " << charArray[9] << std::endl;
	}
    catch(const std::exception& e)
    {
		std::cerr << "test char Exception caught: " << e.what() << std::endl;
	}

    
    std::cout << std::endl << MAGENTA << "************Test constructeur table of string************" << WHITE <<std::endl;
    try
    {
        Array<std::string> stringArray(3);
        std::cout << "string array size: " << stringArray.size() << std::endl;
		stringArray[0] = "Hello ";
		stringArray[1] = "World ";
		stringArray[2] = "bye bye";
		for (unsigned int i = 0; i < stringArray.size(); i++)
			std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
	}
    catch(const std::exception& e)
    {
		std::cerr << "test string Exception caught: " << e.what() << std::endl;
	}

    
    std::cout << std::endl << MAGENTA << "************Test constructeur by copy table of int************" << WHITE <<std::endl;
    try
    {
        Array<int> copyArray(intArray); //appel du constructeur de copie

        std::cout << "copyArray size: " << copyArray.size() << std::endl;
        for (unsigned int i = 0; i < copyArray.size(); i++)
            std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;

        std::cout << CYAN << "\n>>> Modifying copyArray[0] = 42" << WHITE << std::endl;
        copyArray[0] = 42;

        std::cout << "copyArray[0] = " << copyArray[0] << std::endl;
        std::cout << "intArray[0] = " << intArray[0] << " (doit rester inchangé)" << std::endl;

        std::cout << CYAN << "\n>>> Test d’accès hors limites" << WHITE << std::endl;
        std::cout << "intArray[5] = " << intArray[5] << std::endl; // Doit lancer une exception
    }
    catch (const std::exception& e)
    {
        std::cerr << "test copy Exception caught: " << e.what() << std::endl;
    }


    std::cout << std::endl << MAGENTA << "************Test constructeur by assignation table of char************" << WHITE <<std::endl;
    try
    {
        Array<char> copyCharArray;
        copyCharArray = charArray;  // Test de l’opérateur d’affectation

        std::cout << "copyCharArray size: " << copyCharArray.size() << std::endl;
        for (unsigned int i = 0; i < copyCharArray.size(); i++)
            std::cout << "copyCharArray[" << i << "] = " << copyCharArray[i] << std::endl;

        std::cout << CYAN << "\n>>> Modification de copyCharArray[0] = 'Z'" << WHITE << std::endl;
        copyCharArray[0] = 'Z';
        std::cout << "copyCharArray[0] = " << copyCharArray[0] << std::endl;
        std::cout << "charArray[0] = " << charArray[0] << " (doit rester inchangé)" << std::endl;

        std::cout << CYAN << "\n>>> Test d’accès hors limites" << WHITE << std::endl;
        std::cout << "charArray[9] = " << charArray[9] << std::endl;  // Doit lever une exception
    }
    catch (const std::exception& e)
    {
        std::cerr << "test assignation Exception caught: " << e.what() << std::endl;
    }
    return 0;
}