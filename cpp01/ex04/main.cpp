/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:18:28 by aamhal            #+#    #+#             */
/*   Updated: 2023/12/27 20:24:56 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string replace_strings(const std::string &buff, const std::string s1, const std::string s2)
{
    std::string s;
    for (size_t i = 0 ; i < buff.length(); i++)
    {
        if (buff.substr(i, s1.length()) == s1)
        {
            s += s2;
            i += s2.length() - 1; 
        }
        else
            s += buff[i];
    }
    return (s);
}

int main (int ac, char **av)
{
    if (ac == 4)
    {
        std::string fname = av[1];
        std::ifstream f(fname);
        if (!f.is_open()) {
            std::cout << "file error" << fname << std::endl;
            return 1;
        }
        std::stringstream buffer;
        buffer << f.rdbuf();
        f.close();
        std::string s = buffer.str();
        s = replace_strings(s, av[2], av[3]);
        std::string newF = fname + ".replace";
        std::ofstream outfile(newF, std::ios::trunc);
        if (outfile.is_open()) {
            outfile << s;
            outfile.close();
        }
        else
        {
            std::cout << "file error" << newF << std::endl;
            return (1);
        }
        return 0;
    }
    else 
        std::cout << "This programe take only three arguments (Filename , s1, s2) ";
}