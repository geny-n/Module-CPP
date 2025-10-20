/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:41:01 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/01 16:41:35 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Includes.hpp"

std::string adjustLength(std::string str)
{
	long unsigned int i, j;

	i = 1;
	j = str.length();
	if (str.length() >= 11)
		str = str.replace(9,str.length()-9,".");
	else
	{
		while (i <= (10 - j))
		{
	        str = ' ' + str; 
			i++;
		}
	}
	return (str);
}

void display_contact(PhoneBook *pb)
{
    int id = 0;

    std::string str1, str2, str3;	
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name| Nick Name|" << std::endl;
    while (id < 8 && pb->get_contact(id).get_first_name() != "")
    {
        std::cout << "|----------|----------|----------|----------|" << std::endl;
        std::cout << "|" << std::setw(10) << id + 1 << "|";
        str1 = adjustLength(pb->get_contact(id).get_first_name());
        str2 = adjustLength(pb->get_contact(id).get_last_name());
        str3 = adjustLength(pb->get_contact(id).get_nick_name());
        std::cout << str1 << "|" << str2 << "|" << str3 << "|" << std:: endl; 
        id++;
    }
    std::cout << "|___________________________________________|" << std::endl;
    std::cout << std::endl<< "----------------------------------------------------------" << std::endl;
}

void search_contact(PhoneBook *pb, int idx, int flag)
{
    int id;
    std::string str;

    display_contact(pb);
    if (idx > 0)
    {
        while (1)
        {
            std::cout <<"Search an ID : ";
            std::getline(std::cin, str);
            if (str != "")
            {
                id = atoi(str.c_str());
                if (id < 1 || (flag == 0 && id > idx) || (flag == 1 && id > 8) || !id)
                    std::cout << "Wrong ID Please retry"<< std::endl;
                else
                {
                    std::cout  <<"First Name : " << pb->get_contact(id-1).get_first_name() << std::endl;
                    std::cout  <<"Last Name : " << pb->get_contact(id-1).get_last_name() << std::endl;
                    std::cout  <<"Nick Name : " << pb->get_contact(id-1).get_nick_name() << std::endl;
                    std::cout  <<"Phone Number : " << pb->get_contact(id-1).get_phone() << std::endl;
                    std::cout  <<"Dark Secret : " << pb->get_contact(id-1).get_dark_secret() << std::endl;
                    break;
                }
            }
        }
    }
}

int main ()
{
    PhoneBook pb;
    std::string str;
    int idx = 0;
    int flag = 0;

    std::cout << "WELCOME TO YOUR PHONE BOOK" << std::endl;
    while (str != "EXIT")
    {
        std::cout << std::endl << "Enter Your Choice (ADD, SEARCH, EXIT) : ";
        std::getline(std::cin, str);
        if ((str != "ADD" && str != "SEARCH" && str != "EXIT") || str == "")
            std::cout << "Wrong Input. PLease Try Again" << std::endl;
        if (str == "ADD")
        {
            if (idx == 8)
            {
                idx = 0;
                flag = 1;
            }
            pb.set_cont_pb(idx);
            idx++;
        }
        if (str == "SEARCH")
        {
            if (idx == 0)
            {
                std::cout << "0 contact. Please enter one first" << std::endl;
                continue;
            }
            search_contact(&pb, idx, flag);
        }
            
    }
    std::cout << "SEE YOU SOON" << std::endl;
    return (0);
}