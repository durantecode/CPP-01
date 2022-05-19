/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 00:59:02 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/17 15:23:30 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
	std::string m_name;
	Weapon&		m_weapon;

	public:
	HumanA(std::string name, Weapon& weapon);

	void setName(std::string name);
	void attack();

	~HumanA(void);
};

#endif
