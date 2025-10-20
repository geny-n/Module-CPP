/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:57:16 by ngeny             #+#    #+#             */
/*   Updated: 2025/06/17 16:46:20 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"

int main( void ) {
    std::cout << std::endl << MAGENTA << "*****************************TEST INT*****************************" << WHITE <<std::endl;
    int a = 2;
    int b = 3;
    std::cout << "before a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << "after a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::cout << std::endl << MAGENTA << "*****************************TEST STRING*****************************" << WHITE <<std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "before c = " << c << ", d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "after c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    std::cout << std::endl << MAGENTA << "*****************************TEST CHAR*****************************" << WHITE <<std::endl;
    char e = 'e';
    char f = 'f';
    std::cout << "before e = " << e << ", f = " << f << std::endl;
    ::swap(e, f);
    std::cout << "after e = " << e << ", f = " << f << std::endl;
    std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
    std::cout << "max(e, f) = " << ::max(e, f) << std::endl;
        
    return 0;
}

// int main( void )
// {
//     int a = 8;
//     int b = 8;
//     ::swap( a, b );
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//     std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
//     std::string c = "chaine";
//     std::string d = "chaine";
//     ::swap(c, d);
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
//     std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
//     return 0;
// }