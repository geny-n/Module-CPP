/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:38:30 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/29 11:20:55 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "iostream"
#include "string"
#include <sstream>

class Brain
{
	protected :
		std::string _Ideas[100];
	public :
		Brain(void);//constructeur default
		Brain(const Brain& f1); //constructeur de recopie
		Brain& operator=(const Brain& f);
		~Brain();
		std::string getIdeas(int i);
		void setIdeas(int i, std::string idea);
};

#endif