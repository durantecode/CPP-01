/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 00:58:43 by ldurante          #+#    #+#             */
/*   Updated: 2022/03/30 17:52:08 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : m_name(name), m_weapon(nullptr) {}

void HumanB::setName(std::string name)
{
	this->m_name = name;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
	this->m_weapon = &newWeapon;
}

void HumanB::attack(void)
{
	if (this->m_weapon)
		std::cout << this->m_name << " attacks with his " << m_weapon->getType()  << std::endl;
	else
		std::cout << this->m_name << " has no weapon" << std::endl;
}

HumanB::~HumanB(void) {}