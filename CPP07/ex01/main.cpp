/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:57:16 by ngeny             #+#    #+#             */
/*   Updated: 2025/06/17 17:40:04 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void toUpper(char &c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
}

void toPrint(const std::string &str)
{
    std::cout << str << std::endl;
}

void increment(int &i)
{
    i += 1;    
}

int main()
{
    std::cout << std::endl << MAGENTA << "*****************************TEST CHAR*****************************" << WHITE <<std::endl;
    char arr1[] = {'a', 'b', 'c'};
    iter(arr1, 3, toUpper);
    for(int i = 0; i < 3; ++i)
        std::cout << arr1[i] << " ";
    std::cout << std::endl;

    std::cout << std::endl << MAGENTA << "*****************************TEST STRING*****************************" << WHITE <<std::endl;        
    std::string arr2[] = {"hello", "world", "good"};
    iter(arr2, 3, toPrint);

    std::cout << std::endl << MAGENTA << "*****************************TEST INT*****************************" << WHITE <<std::endl;        
    int arr3[] = {1, 2, 3, 4};
    iter(arr3, 4, increment);
    for(int i = 0; i < 4; ++i)
        std::cout << arr3[i] << " ";
    std::cout << std::endl;
}