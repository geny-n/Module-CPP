/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:57:27 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/08 13:57:28 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "ERROR arg" << std::endl;
		return (0);
	}
	Harl this_is_Harl;
	this_is_Harl.complain(argv[1]);
	return (0);
}
