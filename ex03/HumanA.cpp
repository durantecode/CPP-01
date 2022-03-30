/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 00:58:33 by ldurante          #+#    #+#             */
/*   Updated: 2022/03/30 17:51:54 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : m_name(name), m_weapon(weapon) {}

void HumanA::setName(std::string name)
{
	this->m_name = name;
}

void HumanA::attack(void)
{
	std::cout << this->m_name << " attacks with his " << this->m_weapon.getType() << std::endl;
}

HumanA::~HumanA(void) {}