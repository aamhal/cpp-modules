/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:23:40 by aamhal            #+#    #+#             */
/*   Updated: 2023/12/27 20:30:06 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"



HumanB::HumanB(const std::string &n) : name(n), wep(NULL) {
	// std::cout << "Constructor of :" << name <<std::endl;
}

HumanB::~HumanB() {
	// std::cout << "Destructor of :" << name << std::endl;
}

void HumanB::attack() {
	if (wep)
		std::cout << name << " attacks with their" << wep->getType() << std::endl;
	else
		std::cout << "can't attack !!" << std::endl;
}

void HumanB::setWeapon(Weapon &w) {wep = &w;}