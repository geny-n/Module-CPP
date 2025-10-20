/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:19:55 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/08 14:59:44 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/*un pointeur peut etre null,
un pointeur peut pointer sur differentes adresses au cours du programme 

une reference non et doit etre tjr initialise
une reference ne change pas au cours de tout le programme, elle fait tjr reference a la meme variable
*/

int main ()
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &stringREF = var;

    std::cout << "Memory address : " << &var << std::endl;
    std::cout << "Memory address using stringPTR : " << stringPTR << std::endl;
    std::cout << "Memory address using stringREF : " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "Value of the string : " << var << std::endl;
    std::cout << "Value of the string using stringPTR : " << *stringPTR << std::endl;
    std::cout << "Value of the string using stringREF : " << stringREF << std::endl;
}
