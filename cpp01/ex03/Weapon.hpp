/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:03:56 by aamhal            #+#    #+#             */
/*   Updated: 2023/12/27 11:50:32 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H


#include <iostream>

class Weapon
{
private:
	std::string type;
public:

	void setType(std::string s);
	std::string getType();
	Weapon();
	Weapon(std:: string s);
	~Weapon();
};



#endif