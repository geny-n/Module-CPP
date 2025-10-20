/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:41:41 by ngeny             #+#    #+#             */
/*   Updated: 2025/04/08 13:46:31 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string ft_replace(std::string line, std::string s1, std::string s2)
{
    size_t here;
    std::string dest;
    size_t i = 0;
    size_t j = 0;
    size_t len_s1 = s1.length();
    size_t len_s2 = s2.length();

    here = line.find(s1, 0);
    if (here == std::string::npos)
        return (line);  
    while (here != std::string::npos)
    {
        while (i < here)
        {
            dest += line[i];
            i++;
            j++;
        }
        j--;
        dest += s2;
        j += len_s2;
        i += len_s1;
        here = line.find(s1, here + len_s1);
        
    }
    while(line[i])
    {
        dest += line[i]; 
        i++;
    }
    return (dest);
}

int main(int argc, char **argv)
{
    std::string out_file;
    std::string in_file;
    std::string line;
    std::string this_line;
    std::string s1;
    std::string s2;

    if (argc != 4 || !argv[1] ||  !argv[2] || !argv[3])
    {
        std::cout << "Error arg" <<std::endl;
        return (0);
    }
    in_file = argv[1];
    std::ifstream file_in(in_file.c_str(), std::ios::in);
    
    if (file_in.is_open())
    {
        out_file = in_file + ".replace";
        std::ofstream file_out(out_file.c_str(), std::ios::out);
        while (std::getline(file_in, line))
        {
            this_line = ft_replace(line, argv[2], argv[3]);   
            if (file_out.is_open())
            {
                file_out << this_line;
                file_out << std::endl;
            }
            else
                std::cout << "can not open outfile" <<std::endl;
        }
        file_in.close();
		file_out.close();
    }
    else
        std::cout << "can not open infile" <<std::endl;
    return (0);
}
