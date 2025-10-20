 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:57:54 by ngeny             #+#    #+#             */
/*   Updated: 2025/06/05 19:10:03 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "iostream"
#include "string"
#include "cstdlib"

#define RED         "\033[0;31m"
#define GREEN       "\033[0;32m"
#define YELLOW      "\033[0;33m"
#define BLUE        "\033[0;34m"
#define MAGENTA     "\033[0;35m"
#define CYAN        "\033[0;36m"
#define WHITE       "\033[0;37m"

template <typename T>
class Array
{
    private :
        T* _Element;
        unsigned int _Size;

    public :
		Array(void);
        Array(unsigned int n);
		Array(const Array& copy);
		Array& operator=(const Array& f);
		virtual ~Array();

        T& operator[](unsigned int index); // Accessor
        unsigned int size() const; // Size getter

        class OutBandException : public std::exception
        {
            public :
                virtual const char * what() const throw();
        };
};

#include "Array.tpp"
#endif