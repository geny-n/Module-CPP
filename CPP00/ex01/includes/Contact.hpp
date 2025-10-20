/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:40:13 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/01 16:40:14 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "Includes.hpp"

class Contact
{
    private:
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_NickName;
		std::string _PhoneNumber;
		std::string _DarkestSecret;

	public:
		Contact(void);
		Contact(std::string fname, std::string lname, std::string nname, std::string phone, std::string darksecret); //crer un contact
		~Contact(void);

		std::string	get_first_name(void) const;
		void	set_first_name(std::string fname);

		std::string	get_last_name(void) const;
		void	set_last_name(std::string lname);

		std::string	get_nick_name(void) const;
		void	set_nick_name(std::string nname);

		std::string	get_phone(void) const;
		void	set_phone(std::string phone);

		std::string	get_dark_secret(void) const;
		void	set_dark_secret(std::string darksecret);


};

#endif