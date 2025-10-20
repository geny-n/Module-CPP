/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:57:16 by ngeny             #+#    #+#             */
/*   Updated: 2025/07/11 01:14:32 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int> vec;
    std::cout << CYAN << "***INIT VECTOR OF VALUES [1,2,3,4,5]***" << RESET << std::endl;
    for (int i = 0; i < 5; i++)
        vec.push_back(i + 1);
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << std::endl;
    
    std::cout << MAGENTA << "TRY TO FIND THE VALUE 3 (should find)" << RESET << std::endl;
    try {
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "Element found: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << MAGENTA << "TRY TO FIND THE VALUE 8 (should not find)" << RESET << std::endl;
    try {
        std::vector<int>::iterator it = easyfind(vec, 8);
        std::cout << "Element found: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    
    /***************************************************************************/
    std::list<int> lst;
    std::cout << CYAN << "***INIT LIST OF VALUES [1,2,3,4,5]***" << RESET << std::endl;
    for (int i = 0; i < 5; i++)
    	lst.push_back(i + 1);
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << MAGENTA << "TRY TO FIND THE VALUE 3 (should find)" << RESET << std::endl;
    try {
        std::list<int>::iterator it = easyfind(lst, 3);
        std::cout << "Element found: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << MAGENTA << "TRY TO FIND THE VALUE 8 (should not find)" << RESET << std::endl;
    try {
        std::list<int>::iterator it = easyfind(lst, 8);
        std::cout << "Element found: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    return (0);
}