/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 20:39:13 by ngeny             #+#    #+#             */
/*   Updated: 2025/09/10 14:54:25 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    std::cout << "RPN default constructor called" << std::endl;
}

RPN::RPN(const RPN &other) : _Stack(other._Stack)
{
    std::cout << "RPN copy constructor called" << std::endl;
}

RPN &RPN::operator=(const RPN &other)
{
    std::cout << "RPN copy assignment operator called" << std::endl;
    if (this != &other)
        _Stack = other._Stack;
  return *this;
}

RPN::~RPN()
{
    std::cout << "RPN destructor called" << std::endl;
}

int RPN::opePolonaise(const std::string &arg)
{
    if (arg.empty())
        throw std::runtime_error("Error: empty argument.");
    char end = arg[arg.size() - 1];
    //verifier les espaces au debut et a la fin de l argument
    if (isspace(arg[0]) || isspace(end))
        throw std::runtime_error("Error: expression cannot start or end with space.");
    if (!isdigit(arg[0]))
        throw std::runtime_error("Error: expression cannot start with operator.");
    if (isdigit(end))
        throw std::runtime_error("Error: expression cannot end with number.");
    int i = 0;
    int res;
    while (arg[i])
    {
        if (!isdigit(arg[i]) && arg[i] != '+' && arg[i] != '-' && arg[i] != '/' && arg[i] != '*' && arg[i] != ' ')
            throw std::runtime_error("Error: argument syntax.");
        if (arg[i] != ' ' && i + 1 < static_cast<int>(arg.size()) && arg[i + 1] != ' ')
            throw std::runtime_error("Error: each element must be separated by space and numbers must be less than 10.");
        if (isdigit(arg[i])) // si c est un chiffre mettre dans la pile
            _Stack.push(arg[i] - '0');
        else if (arg[i] == '+' || arg[i] == '-' || arg[i] == '/' || arg[i] == '*') // faire le calcule quand on tombe sur un operateur 
        {
            if (_Stack.size() < 2) //si il y a moins de 2 element dans la pile -> erreur
                throw std::runtime_error("Error: not enouth operand.");
            int b = _Stack.top(); //b = on prend le dernier element de la pile
            _Stack.pop(); //on supprime le dernier element donc il reste que le 1er
            int a = _Stack.top();
            if (arg[i] == '+')
                res = a + b;
            else if (arg[i] == '-')
                res = a - b;
            else if (arg[i] == '*')
                res = a * b;
            else if (arg[i] == '/')
            {
                if (b == 0)
                    throw std::runtime_error("Error: division by zero.");
                res = a / b;
            }
            _Stack.pop(); //on supprime le dernier element
            _Stack.push(res); //on ajoute le resultat dans la pile
        }
        i++;
    }
    if (_Stack.size() != 1) // si a la fin il rester plus de 1 element dans la pile
        throw std::runtime_error("Error: Somthing went wrong.");
    return (_Stack.top());
}