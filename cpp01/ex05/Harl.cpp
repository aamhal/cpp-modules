/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:11:57 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/06 15:13:01 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*ptrToFunc)();
    if (level == "DEBUG")
        ptrToFunc = &Harl::debug;
    else if (level == "INFO")
        ptrToFunc = &Harl::info;
    else if (level == "WARNING")
        ptrToFunc = &Harl::warning;
    else if (level == "ERROR")
        ptrToFunc = &Harl::error;
    else
    {
        std::cout << "unknown message : " << level << std::endl;
        return ;
    }
   (this->*ptrToFunc)();
}