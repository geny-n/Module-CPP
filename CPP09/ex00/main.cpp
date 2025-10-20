/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:59:43 by ngeny             #+#    #+#             */
/*   Updated: 2025/08/20 01:01:09 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return (1);
    }
    try
    {
        BitcoinExchange exchange;
        exchange.openFileCSV("data.csv");
        exchange.openFileInput(argv[1]);
    }
    catch (const std::exception & e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
        return (1);
    }
    return (0);
}
