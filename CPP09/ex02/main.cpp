/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 20:36:31 by ngeny             #+#    #+#             */
/*   Updated: 2025/09/10 15:00:45 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//gestion du pipe de la commande shell
void processCommandString(const char* cmd, std::vector<int>& vec, std::deque<int>& deq) {
    FILE* pipe = popen(cmd, "r");
    if (!pipe)
        throw std::runtime_error("Error: popen");
    char buffer[4096];
    std::string result;
    while (fgets(buffer, sizeof(buffer), pipe) != NULL)
    {
        result += buffer;
    }
    pclose(pipe);

    //convertion de la chaine de charactere de la commande shell en une suite d entiers et les insere dans les conteneurs
    std::istringstream iss(result);
    int number;
    while (iss >> number)
    {
        if (number < 0)
            throw std::invalid_argument("Error: negatif");
        vec.push_back(number);
        deq.push_back(number);
    }
}

void processArgs(int argc, char** argv, std::vector<int>& vec, std::deque<int>& deq) {
    for (int i = 1; i < argc; ++i)
    {
        std::istringstream iss(argv[i]);
        std::string token;
        while (iss >> token)
        {
            char* endptr;
            long val = strtol(token.c_str(), &endptr, 10);

            // Vérifie si la conversion est valide
            if (*endptr != '\0')
                throw std::invalid_argument("Non-numeric argument : " + token);

            // Vérifie les limites de l'entier
            if (val <= 0 || val > INT_MAX)
                throw std::out_of_range("Number out of range : " + token);
            vec.push_back(static_cast<int>(val));
            deq.push_back(static_cast<int>(val));
        }
    }
}

//on ajoute LL = long long pour s'assurer de la compatibilité et avoir assez de précision
//tv.tv_sec est de type time_t, qui est souvent long ou long long.
long long getCurrentTime() 
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec * 1000000LL + tv.tv_usec;
}

void vectorSort(std::vector<int>& vec, PmergeMe& pmergeme_v)
{
    std::cout << MAGENTA << "Before : " << RESET;
    for (size_t i = 0; i < vec.size(); i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    long startVector = getCurrentTime();
    pmergeme_v.FordJohnsonAlgoVector(vec);
    long endVector = getCurrentTime();
    long long durationVector = endVector - startVector;
    
    std::cout << MAGENTA << "After : " << RESET;
    for (size_t i = 0; i < vec.size(); i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;
    std::cout << MAGENTA << "Time to process a range of " << vec.size() << " elements with std::[vector] : " << RESET << durationVector << " us" << std::endl;
}

void dequeSort(std::deque<int>& deq, PmergeMe& pmergeme_q)
{
    long startDeque = getCurrentTime();
    pmergeme_q.FordJohnsonAlgoDeque(deq);
    long endDeque = getCurrentTime();
    long long durationDeque = endDeque - startDeque;
    
    std::cout << MAGENTA << "Time to process a range of " << deq.size() << " elements with std::[deque] : " << RESET << durationDeque << " us" << std::endl;
}

int main (int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Error: wrong argument" <<std::endl;
        return (1);
    }
    
    std::vector<int> vec;
    std::deque<int> deq;
    PmergeMe pmergeme_v;
    PmergeMe pmergeme_d;
    try
    {
        if (argc == 2 && (strchr(argv[1], '`') || strchr(argv[1], '|'))) //commande shell avec pipe
            processCommandString(argv[1], vec, deq);
        else
            processArgs(argc, argv, vec, deq);
        vectorSort(vec, pmergeme_v);
        dequeSort(deq, pmergeme_d);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return (1);
    }
    
    std::cout << CYAN << "****** END ******" << RESET << std::endl;
    return (0);
}