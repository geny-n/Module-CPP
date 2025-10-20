/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:57:15 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/08 13:57:17 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
}
void Harl::info( void )
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

int get_level(std::string level)
{
	int i = 0;
	std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4)
	{	
		if (level == tab[i])
			return (i);
		i++;
	}
	return (-1);
}

void Harl::complain( std::string level )
{
	void (Harl::* ptfptr[4]) (void) = {&Harl::debug, &Harl::info, &Harl:: warning, &Harl::error};	
	int i = get_level(level);

	switch (i)
	{
		case 0 :
			(this->*ptfptr[0]) ();
			__attribute__((fallthrough));
		case 1 :
			(this->*ptfptr[1]) ();
			__attribute__((fallthrough));	
		case 2 :
			(this->*ptfptr[2]) ();
			__attribute__((fallthrough));		
		case 3	:
			(this->*ptfptr[3]) ();
			break;
		default :
			std::cout << "Probably complaining about insignificant problems" << std::endl;
	};
}

