/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 11:25:28 by ngeny             #+#    #+#             */
/*   Updated: 2025/09/05 13:17:39 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
// #include <stack>
#include <sstream>      // istringstream
#include <cstring>      // strchr
#include <cstdio>       // FILE, popen, pclose, fgets
#include <cstdlib>      // exit, strtol si utilisé
#include <climits>      // max int
#include <algorithm>    // std::lower_bound
#include <ctime>        // getTime
#include <sys/time.h>
#include <iomanip> 
#include <vector>
#include <deque>

#define RED         "\033[0;31m"
#define GREEN       "\033[0;32m"
#define YELLOW      "\033[0;33m"
#define BLUE        "\033[0;34m"
#define MAGENTA     "\033[0;35m"
#define CYAN        "\033[0;36m"
#define RESET       "\033[0;37m"

class PmergeMe
{
    private :
        std::vector< std::vector<int> > _MaxMemoryVec;
        std::vector< std::vector<int> > _MinMemoryVec; 
        std::deque< std::deque<int> > _MaxMemoryDeq;
        std::deque< std::deque<int> > _MinMemoryDeq; 
        int _Nb_rec;
    public :
        PmergeMe();
        PmergeMe(const PmergeMe & other);
        PmergeMe & operator = (const PmergeMe & other);
        ~PmergeMe();

        void FordJohnsonAlgoVector(std::vector<int>& vec);
        void FordJohnsonAlgoDeque(std::deque<int>& deq);
};

#endif