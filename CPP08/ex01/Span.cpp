/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 01:30:37 by ngeny             #+#    #+#             */
/*   Updated: 2025/07/14 19:32:38 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	std::cout << "Span created with default constructor." << std::endl;
}

Span::Span(unsigned int N) : _N(N)
{
	std::cout << "Span created with constructor." << std::endl;
}

Span::Span(const Span &input) : _N(input._N), _Vec(input._Vec)
{
	std::cout << "Span Copy Constructor called" << std::endl;
}
Span::~Span(void)
{
	std::cout << "Span destroyed." << std::endl;
}

Span &Span::operator=(const Span &input)
{
	std::cout << "Assignment operator for Span called." << std::endl;
	if (this != &input)
	{
		this->_N = input._N;
		this->_Vec = input._Vec;
	}
	return *this;
}

void Span::addNumber(int num)
{
	if (_Vec.size() >= _N)
	{
		throw (MaxException());
	}
	_Vec.push_back(num);
}

void Span::addNumbers(int* begin, int* end)
{
    if (_Vec.size() + (end - begin) > _N)
        throw std::out_of_range("ERROR: Range would overflow Span");
    _Vec.insert(_Vec.end(), begin, end);
}

int Span::shortestSpan()
{
	int res;
	if (_Vec.size() < 2)
	{
		throw (TooSmallSpanException());
	}
	std::vector<int> sorted = _Vec; 
	std::sort(sorted.begin(), sorted.end());
	
	std::vector<int>::iterator it1 = sorted.begin();
    std::vector<int>::iterator it2 = it1 + 1;
	res = *it2 - *it1;
	while (it2 != sorted.end())
	{
		if ((*it2 - *it1) < res)
			res = *it2 - *it1;
		it1++;
		it2++;	
	}
	return (res);
}

int Span::longestSpan()
{
	if (_Vec.size() < 2)
	{
		throw (TooSmallSpanException());
	}
	int min = *std::min_element(_Vec.begin(), _Vec.end());
    int max = *std::max_element(_Vec.begin(), _Vec.end());

    return max - min;
}


void Span::printNumbers() const {
    std::cout << "[ ";
    for (std::vector<int>::const_iterator it = _Vec.begin(); it != _Vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << "]" << std::endl;
}