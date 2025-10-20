/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 20:36:31 by ngeny             #+#    #+#             */
/*   Updated: 2025/08/20 00:57:13 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: wrong argument" <<std::endl;
        return (1);
    }
    RPN rpn;
    try
    {
        int result = rpn.opePolonaise(argv[1]);
        std::cout << result << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (1);
    }
    return (0);
}