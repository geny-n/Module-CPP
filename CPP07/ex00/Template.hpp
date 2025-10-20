/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:57:54 by ngeny             #+#    #+#             */
/*   Updated: 2025/06/17 16:37:55 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include "iostream"

#define RED         "\033[0;31m"
#define GREEN       "\033[0;32m"
#define YELLOW      "\033[0;33m"
#define BLUE        "\033[0;34m"
#define MAGENTA     "\033[0;35m"
#define CYAN        "\033[0;36m"
#define WHITE       "\033[0;37m"

template <typename TT>
void swap(TT &a, TT &b)
{
    TT temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename TT>
TT min(TT &a, TT &b)
{
    if (a < b)
        return (a);
    if (a == b)
        return (b);
    return (b);
}

template <typename TT>
TT max(TT &a, TT &b)
{
    if (a > b)
        return (a);
    if (a == b)
        return (b);
    return (b);
}

#endif