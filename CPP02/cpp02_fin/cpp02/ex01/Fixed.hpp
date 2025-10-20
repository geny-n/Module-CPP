/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:10:50 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/09 15:27:50 by ngeny            ###   ########.fr       */
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
		Fixed& operator=(const Fixed& f);//operateur d affectation surcharge
		~Fixed(void);//destructeur

		float toFloat( void ) const;//convertit la valeur en virgule fixe en nombre à virgule flottante.
		int toInt( void ) const;//convertit la valeur en virgule fixe en nombre entier.
		int getRawBits( void ) const;
		void setRawBits( int const raw );

};
std::ostream& operator<<(std::ostream& out, const Fixed& f);
#endif
