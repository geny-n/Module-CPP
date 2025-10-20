/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:57:54 by ngeny             #+#    #+#             */
/*   Updated: 2025/06/17 17:36:25 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"
#include "string"

#define RED         "\033[0;31m"
#define GREEN       "\033[0;32m"
#define YELLOW      "\033[0;33m"
#define BLUE        "\033[0;34m"
#define MAGENTA     "\033[0;35m"
#define CYAN        "\033[0;36m"
#define WHITE       "\033[0;37m"

template <typename T1, typename T2>
void iter(T1 *array, size_t len, T2 func)
{
    if (!array)
    {
        std::cout << "Error" << std::endl;
        return ;
    }
    size_t i = 0;
    while (i < len)
    {
        func(array[i]);
        i++;
    }
}
#endif