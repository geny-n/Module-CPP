/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:42:00 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/01 16:42:01 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Includes.hpp"

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook(void)
{
    std::cout << "suppression PhoneBook"<<std::endl;
}

Contact PhoneBook::get_contact(int index) const
{
    return (this->_book[index]);
}

void PhoneBook::set_cont_pb(int index)
{
    std::string str = "";

    while (1)
    {
        std::cout <<"your first name : ";
        std::getline(std::cin, str);
        if (str != "")
            break ;
    }
    this->_book[index].set_first_name(str);

    while (1)
    {
        std::cout <<"your last name : ";
        std::getline(std::cin, str);
        if (str != "")
            break ;
    }
    this->_book[index].set_last_name(str);

    while (1)
    {
        std::cout <<"your nick name : ";
        std::getline(std::cin, str);
        if (str != "")
            break ;
    }
    this->_book[index].set_nick_name(str);

    while (1)
    {
        std::cout <<"your phone number : ";
        std::getline(std::cin, str);
        if (str != "")
            break ;
    }
    this->_book[index].set_phone(str);

    while (1)
    {
        std::cout <<"your most dark secret : ";
        std::getline(std::cin, str);
        if (str != "")
            break ;
    }
    this->_book[index].set_dark_secret(str);

}