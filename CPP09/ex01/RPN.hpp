/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 20:37:27 by ngeny             #+#    #+#             */
/*   Updated: 2025/08/20 00:57:28 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
 
class RPN
{
    private :
        std::stack<int> _Stack;
    public :
        RPN();
        RPN(const RPN & other);
        RPN & operator = (const RPN & other);
        ~RPN();

        int opePolonaise(const std::string &arg);
};

#endif