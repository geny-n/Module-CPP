/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:40:53 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/01 16:40:54 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Includes.hpp"

Contact::Contact()
{

}

Contact::Contact(std::string fname, std::string lname, std::string nname, std::string phone, std::string darksecret)
{
    this->_FirstName = fname;
    this->_LastName = lname;
    this->_NickName = nname;
    this->_PhoneNumber = phone;
    this->_DarkestSecret = darksecret;
}

Contact::~Contact(void)
{
    
}

std::string Contact::get_first_name(void) const
{
    return (this->_FirstName);
}
void    Contact::set_first_name(std::string fname)
{
    this->_FirstName = fname;
}

std::string Contact::get_last_name(void) const
{
    return (this->_LastName);
}
void    Contact::set_last_name(std::string lname)
{
    this->_LastName = lname;
}

std::string Contact::get_nick_name(void) const
{
    return (this->_NickName);
}
void    Contact::set_nick_name(std::string nname)
{
    this->_NickName = nname;
}

std::string Contact::get_phone(void) const
{
    return (this->_PhoneNumber);
}
void    Contact::set_phone(std::string phone)
{
    this->_PhoneNumber = phone;
}

std::string Contact::get_dark_secret(void) const
{
    return (this->_DarkestSecret);
}
void    Contact::set_dark_secret(std::string darksecret)
{
    this->_DarkestSecret = darksecret;
}

