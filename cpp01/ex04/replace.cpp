/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:30:19 by aamhal            #+#    #+#             */
/*   Updated: 2023/12/27 20:30:28 by aamhal           ###   ########.fr       */
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