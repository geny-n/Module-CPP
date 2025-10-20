/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 22:04:44 by ngeny             #+#    #+#             */
/*   Updated: 2025/07/25 16:23:55 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

# include <iostream>
# include <stack> 
# include <vector>
# include <algorithm>
# include <exception>
#include <list>
#include <stack>

template<typename T>
class	MutantStack : public std::stack<T>
{
    public :
        MutantStack();
        // MutantStack(unsigned int N);
        MutantStack(const MutantStack &input);
        ~MutantStack();
        MutantStack &operator=(const MutantStack &input);

        typedef typename std::stack<T>::container_type::iterator 		iterator; //la classe stack appel on fonction contair_type(on recupere dec qui a des iterators) donc ca permet de reccuprer l'iterator de dec
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

        iterator	begin(); //on definit l iterator de debut      
		iterator	end(); // de fin

		const_iterator begin() const;   // version const
        const_iterator end() const; 
};

template<typename T>
MutantStack<T>::MutantStack()
{
    std::cout << "Default constructor called" << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &input) : std::stack<T>(input)
{
    std::cout << "Copy constructor called" << std::endl;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
    std::cout << "Destructor called" << std::endl;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &input)
{
    std::cout << "Assignment operator called" << std::endl;
	if (this != &input)
	{
		std::stack<T>::operator=(input);
	}
	return *this;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    std::cout << "Begin" << std::endl;
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    std::cout << "End" << std::endl;
	return this->c.end();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    std::cout << "Const Begin" << std::endl;
    return this->c.begin();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    std::cout << "Const End" << std::endl;
    return this->c.end();
}
#endif