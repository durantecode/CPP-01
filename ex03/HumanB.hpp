/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 00:59:14 by ldurante          #+#    #+#             */
/*   Updated: 2022/03/30 14:35:05 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
	std::string m_name;
	Weapon		*m_weapon;

	public:
	HumanB(std::string name);

	void setName(std::string name);
	void setWeapon(Weapon& weapon);
	void attack();

	~HumanB(void);
};

#endif