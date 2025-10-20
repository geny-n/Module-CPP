/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeff <jeff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:26:31 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/21 18:56:29 by jeff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int _Nbr_fix;
		static const int _Nbr_bit = 8;
	public:
	
		Fixed(void);//constructeur default
		Fixed(const Fixed& f1); //constructeur de recopie
		Fixed(const int n); //constructeur prend un entier const et le converti en virgule fixe
		Fixed(const float f); //constructeur prend un lottant const et le converti en virgule fixe
		~Fixed(void);//destructeur
		
		Fixed& operator=(const Fixed& f);//operateur d affectation surcharge
		
		bool operator>(const Fixed& f) const;
		bool operator<(const Fixed& f) const;
		bool operator>=(const Fixed& f) const;
		bool operator<=(const Fixed& f) const;
		bool operator==(const Fixed& f) const;
		bool operator!=(const Fixed& f) const;

		Fixed operator+(const Fixed& f);
		Fixed operator-(const Fixed& f);
		Fixed operator*(const Fixed& f);
		Fixed operator/(const Fixed& f);

		Fixed operator++(int);
		Fixed  &operator++(void);
		Fixed operator--(int);
		Fixed  &operator--(void);

		/* MIN MAX*/
		static Fixed min(Fixed &a, Fixed &b); //min non constant
		static Fixed max(Fixed &a, Fixed &b); //max non constant
		static const Fixed min(const Fixed &a, const Fixed &b); //min constant
		static const Fixed max(const Fixed &a, const Fixed &b); //max constant
		float toFloat( void ) const;//convertit la valeur en virgule fixe en nombre à virgule flottante.
		int toInt( void ) const;//convertit la valeur en virgule fixe en nombre entier.
		int getRawBits( void ) const;
		void setRawBits( int const raw );

};

std::ostream& operator<<(std::ostream& out, const Fixed& f);

#endif
