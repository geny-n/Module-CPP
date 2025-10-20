/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:57:16 by ngeny             #+#    #+#             */
/*   Updated: 2025/07/25 16:01:23 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}

// int main()
// {
//     std::cout << CYAN << "***TEST DEFAULT CONSTRUCTOR***" << RESET << std::endl;
//     Span zero;
//     std::cout << std::endl;
    
//     std::cout << CYAN << "***TEST COPY CONSTRUCTOR***" << RESET << std::endl;
//     Span original(3);
//     original.addNumber(10);
//     original.addNumber(20);
//     original.addNumber(30);
//     // Copie du Span avec le constructeur de copie
//     Span copy(original);
//     std::cout << "Original: ";
//     original.printNumbers();
//     std::cout << "Copy    : ";
//     copy.printNumbers();
//     std::cout << std::endl;
    
    
//     std::cout << CYAN << "***TEST ASSIGNMENT OPERATOR***" << RESET << std::endl;
//     Span assigned(5);
//     assigned = original;
//     std::cout << "Original: ";
//     original.printNumbers();
//     std::cout << "Assigned: ";
//     assigned.printNumbers();
//     std::cout << std::endl;
    

//     std::cout << CYAN << "***CREATE SPAN OF SIZE 5***" << RESET << std::endl;
//     Span sp = Span(5);
//     std::cout << std::endl;
    
//     std::cout << CYAN << "***FILL THE SPAN***" << RESET << std::endl;
//     try {
//         sp.addNumber(27);
//         sp.addNumber(84);
//         sp.addNumber(13);
//         sp.addNumber(59);
//         sp.addNumber(72);
//         sp.addNumber(23);  // <- Cette ligne lance une exception
//     } 
//     catch (const std::exception &e)
//     {
//         std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
//     }
    
//     std::cout << std::endl<< CYAN << "***NORMAL NUMBER STORED***" << RESET << std::endl;
//     sp.printNumbers();
//     try
//     {
//         std::cout << "the shortest span is : " << sp.shortestSpan() << std::endl;
//         std::cout << "the longest span is : " << sp.longestSpan() << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
//     }
    
//     std::cout << std::endl << CYAN << "***ZERO NUMBER STORED***" << RESET << std::endl;
//     zero.printNumbers();
//     try
//     {
//         std::cout << "the shortest span is : " << zero.shortestSpan() << std::endl;
//         std::cout << "the longest span is : " << zero.longestSpan() << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
//     }
    
//     std::cout << std::endl << CYAN << "***ONE NUMBER STORED***" << RESET << std::endl;
//     Span one = Span(5);
//     one.addNumber(5);
//     one.printNumbers();
//     try
//     {
//         std::cout << "the shortest span is : " << one.shortestSpan() << std::endl;
//         std::cout << "the longest span is : " << one.longestSpan() << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
//     }
    
//     std::cout << std::endl;
    
//     std::cout << std::endl << CYAN << "***RANGE OF ITERATIONS***" << RESET << std::endl;
//     Span addnbrs(10);
//     addnbrs.addNumber(10);
//     addnbrs.addNumber(20);
//     addnbrs.addNumber(30);
//     std::cout << "addnbrs: ";
//     addnbrs.printNumbers();
    
//     std::cout << std::endl;
//     try
//     {
//         int values[] = {5, 10, 15, 4};
//         addnbrs.addNumbers(values, values + 4);
//     } 
//     catch (const std::exception &e)
//     {
//         std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
//     }
//     std::cout << "addnbrs: ";
//     addnbrs.printNumbers();
//     std::cout << std::endl;
    
//     std::cout << std::endl << CYAN << "***TEST WITH 10,000 NUMBERS***" << RESET << std::endl;
//     // Crée un objet Span avec une capacité de 10 000
//     Span bigSpan(10000);

//     // Pour avoir des nombres aléatoires différents à chaque exécution
//     std::srand(static_cast<unsigned int>(std::time(0)));

//     try
//     {
//         // Remplir Span avec 10 000 nombres aléatoires entre 0 et 1 000 000
//         for (int i = 0; i < 10000; ++i)
//         {
//             bigSpan.addNumber(std::rand() % 1000000);
//         }

//         std::cout << "Shortest span: " << bigSpan.shortestSpan() << std::endl;
//         std::cout << "Longest span: " << bigSpan.longestSpan() << std::endl;
//     }
//     catch (std::exception &e)
//     {
//         std::cerr << "Exception: " << e.what() << std::endl;
//     }
//     return 0;
// }