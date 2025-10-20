/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:40:22 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/01 16:43:40 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Includes.hpp"

class PhoneBook
{
    private:
        Contact _book[8];

	public:
		PhoneBook(void);
		~PhoneBook(void);
        Contact get_contact(int index) const;
        void set_cont_pb(int index);


};

#endif