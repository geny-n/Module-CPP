/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 00:08:52 by ngeny             #+#    #+#             */
/*   Updated: 2025/07/11 01:05:14 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>
#include <list>

class	NotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Element not found!");
		}
};

template <typename T>
typename T::iterator easyfind(T &cont, int find)
{
    typename T::iterator tab = std::find(cont.begin(), cont.end(), find);
    if (tab == cont.end())
    {
        throw (NotFoundException());
    }
    return (tab);
}
#endif