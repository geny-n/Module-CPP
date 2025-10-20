/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-19 14:21:05 by ngeny             #+#    #+#             */
/*   Updated: 2025-04-19 14:21:05 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int _Nbr_fix;
		static const int _Nbr_bit = 8;
	public:
	
		Fixed(void);
		Fixed(const Fixed& f1);
		Fixed& operator=(const Fixed& f);
		~Fixed(void);
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
