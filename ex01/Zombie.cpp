/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:57:01 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/17 15:20:58 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

void Zombie::giveName(std::string name)
{
	this->m_name = name;
}

std::string Zombie::getName(void)
{
	return (this->m_name);
}

void Zombie::announce()
{
	std::cout << this->m_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << this->m_name << " was destroyed" << std::endl;
}
