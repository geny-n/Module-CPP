/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:55:25 by aperez-b          #+#    #+#             */
/*   Updated: 2025/04/08 13:52:07 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl this_is_Harl;
	this_is_Harl.complain("DEBUG");
	this_is_Harl.complain("INFO");
	this_is_Harl.complain("WARNING");
	this_is_Harl.complain("ERROR");
	return (0);
}
