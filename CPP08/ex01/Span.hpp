/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 00:08:52 by ngeny             #+#    #+#             */
/*   Updated: 2025/07/19 22:15:23 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>
# include <ctime> 

class Span
{
    private :
    unsigned int _N;
    std::vector<int> _Vec;
    
    public :
        Span(void);
        Span(unsigned int N);
        Span(const Span &input);
        ~Span();
        Span &operator=(const Span &input);

        void addNumber(int num);
        void addNumbers(int* begin, int* end);
        int shortestSpan();
        int longestSpan();
        
        class	MaxException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return ("Cannot add more numbers: Span is full");
                }
        };

        class	TooSmallSpanException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return ("Not enough elements to find a span");
                }
        };
        void printNumbers() const;
};

#endif
