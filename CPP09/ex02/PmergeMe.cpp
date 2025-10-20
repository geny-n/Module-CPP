/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 11:26:26 by ngeny             #+#    #+#             */
/*   Updated: 2025/09/10 14:36:22 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _Nb_rec(0) 
{
    std::cout << "PmergeMe default constructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &other) : _MaxMemoryVec(other._MaxMemoryVec), _MinMemoryVec(other._MinMemoryVec), _MaxMemoryDeq(other._MaxMemoryDeq), _MinMemoryDeq(other._MinMemoryDeq), _Nb_rec(other._Nb_rec)
{
    std::cout << "PmergeMe copy constructor called" << std::endl;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    std::cout << "PmergeMe copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _MaxMemoryVec = other._MaxMemoryVec;
        _MinMemoryVec = other._MinMemoryVec;
        _MaxMemoryDeq = other._MaxMemoryDeq;
        _MinMemoryDeq = other._MinMemoryDeq;
        _Nb_rec = other._Nb_rec;
    }
  return *this;
}

PmergeMe::~PmergeMe()
{
    std::cout << "PmergeMe destructor called" << std::endl;
}

int FindThePairVec(int toFind, std::vector<int>& MinMemoryVec, std::vector<int>& MaxMemoryVec)
{
    int pair = -1;
    for (size_t i = 0; i < MaxMemoryVec.size(); i++)
    {
        if (MaxMemoryVec[i] == toFind)
            pair = MinMemoryVec[i];
    }
    if (pair == -1) // sécurité : si rien trouvé
        throw std::runtime_error("Pair not found in FindThePairVec");
    return (pair);
}

void PmergeMe::FordJohnsonAlgoVector(std::vector<int>& vec)
{
    std::vector<int> maxElementsVec;
    std::vector<int> minElementsVec;
    
    int n = vec.size();
    if (n <= 1)
        return;
    //1. faire des paires
    for (int i = 0; i < n ; i += 2) 
    {
        if (i + 1 < n) // pour ne pas depasser la limite
        {
            if (vec[i] > vec[i + 1])
            {
                maxElementsVec.push_back(vec[i]);
                minElementsVec.push_back(vec[i + 1]);
            }
            else
            {
                maxElementsVec.push_back(vec[i + 1]);
                minElementsVec.push_back(vec[i]);
            }
        }
        else // si nombre impaire ajouter le dernier nombre dans minElementsVec
            minElementsVec.push_back(vec[i]);
    }

    //insertion
    
    this->_MaxMemoryVec.push_back(maxElementsVec);
    this->_MinMemoryVec.push_back(minElementsVec);
    this->_Nb_rec++;
    FordJohnsonAlgoVector(maxElementsVec);
    //inserer le binome(_MinMemoryVec) du 1er element de chaque liste triee
    if (_Nb_rec > 0
        && !maxElementsVec.empty()
        && !_MinMemoryVec[_Nb_rec - 1].empty()
        && !_MaxMemoryVec[_Nb_rec - 1].empty())
    {
        
    
        int valPair = FindThePairVec(maxElementsVec[0], this->_MinMemoryVec[_Nb_rec - 1], this->_MaxMemoryVec[_Nb_rec - 1]);//permet de trouver la paire dans minMemory du 1er element le maxElementVec 
        maxElementsVec.insert(maxElementsVec.begin(), valPair);
        //insertion des autres elements de _MinMemoryVec
        for (size_t i = 0; i < _MinMemoryVec[this->_Nb_rec-1].size(); i++)
        {
            if (_MinMemoryVec[this->_Nb_rec-1][i] != valPair)//ignore la paire trouvee
            {
                // trouve l'itérateur où insérer avec recherche dichotomique
                std::vector<int>::iterator pos = std::lower_bound(maxElementsVec.begin(), maxElementsVec.end(), _MinMemoryVec[this->_Nb_rec-1][i]);
                // insère value à la position trouvée
                maxElementsVec.insert(pos, _MinMemoryVec[this->_Nb_rec-1][i]);
            }
        }
    }
    this->_Nb_rec--;
    vec = maxElementsVec;
}

int FindThePairDeq(int toFind, std::deque<int>& MinMemorydeq, std::deque<int>& MaxMemorydeq)
{
    int pair = -1;
    for (size_t i = 0; i < MaxMemorydeq.size(); i++)
    {
        if (MaxMemorydeq[i] == toFind)
            pair = MinMemorydeq[i];
    }
    if (pair == -1) // sécurité : si rien trouvé
        throw std::runtime_error("Pair not found in FindThePairDeq");
    return (pair);
}

void PmergeMe::FordJohnsonAlgoDeque(std::deque<int>& deq)
{
    std::deque<int> maxElementsDeq;
    std::deque<int> minElementsDeq;
    
    int n = deq.size();
    if (n <= 1)
        return;
    //1. faire des paires
    for (int i = 0; i < n ; i += 2) 
    {
        if (i + 1 < n) // pour ne pas depasser la limite
        {
            if (deq[i] > deq[i + 1])
            {
                maxElementsDeq.push_back(deq[i]);
                minElementsDeq.push_back(deq[i + 1]);
            }
            else
            {
                maxElementsDeq.push_back(deq[i + 1]);
                minElementsDeq.push_back(deq[i]);
            }
        }
        else // si nombre impaire ajouter le dernier nombre dans minElementsDeq
            minElementsDeq.push_back(deq[i]);
    }

    //insertion
    
    this->_MaxMemoryDeq.push_back(maxElementsDeq);
    this->_MinMemoryDeq.push_back(minElementsDeq);
    this->_Nb_rec++;
    FordJohnsonAlgoDeque(maxElementsDeq);
    
    //inserer le binome(_MinMemoryDeq) du 1er element de chaque liste triee
    if (_Nb_rec > 0 
        && !maxElementsDeq.empty()
        && !_MinMemoryDeq[_Nb_rec - 1].empty()
        && !_MaxMemoryDeq[_Nb_rec - 1].empty())
    {
        int deqPair = FindThePairDeq(maxElementsDeq[0], this->_MinMemoryDeq[_Nb_rec - 1], this->_MaxMemoryDeq[_Nb_rec - 1]);//permet de trouver la paire dans minMemory du 1er element le maxElementVec
        maxElementsDeq.push_front(deqPair);
        
        //insertion des autres elements de _MinMemoryDeq
        for (size_t i = 0; i < _MinMemoryDeq[this->_Nb_rec-1].size(); i++)
        {
            if (_MinMemoryDeq[this->_Nb_rec-1][i] != deqPair)
            {
                // trouve l'itérateur où insérer avec recherche dichotomique
                std::deque<int>::iterator pos = std::lower_bound(maxElementsDeq.begin(), maxElementsDeq.end(), _MinMemoryDeq[this->_Nb_rec-1][i]);
                
                // insère value à la position trouvée
                maxElementsDeq.insert(pos, _MinMemoryDeq[this->_Nb_rec-1][i]);
            }
        }
    }
    this->_Nb_rec--;
    deq = maxElementsDeq;
}