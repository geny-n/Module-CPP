/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:57:11 by ngeny             #+#    #+#             */
/*   Updated: 2025/08/19 11:03:20 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <cstdlib>

#define RED         "\033[0;31m"
#define GREEN       "\033[0;32m"
#define YELLOW      "\033[0;33m"
#define BLUE        "\033[0;34m"
#define MAGENTA     "\033[0;35m"
#define CYAN        "\033[0;36m"
#define RESET       "\033[0;37m"

class BitcoinExchange {
    private:
        std::map<std::string, double> _Rates;
        // std::string _filename;


    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange & other);
        BitcoinExchange & operator = (const BitcoinExchange & other);
        ~BitcoinExchange();
        
        bool checkDate(const std::string &date);
        bool checkValue(const std::string &value);
        bool openFileInput(const std::string &fileName);

        bool openFileCSV(const std::string &fileName);
        void ExchangeRates(const std::string &date, double value);

};

#endif