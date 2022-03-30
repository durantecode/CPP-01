/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 00:58:52 by ldurante          #+#    #+#             */
/*   Updated: 2022/03/30 17:52:23 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : m_type(type) {}

void Weapon::setType(std::string type)
{
	this->m_type = type;
}

std::string Weapon::getType(void)
{
	return (this->m_type);
}

Weapon::~Weapon(void) {}