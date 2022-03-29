/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:57:15 by ldurante          #+#    #+#             */
/*   Updated: 2022/03/29 23:41:17 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
	std::string m_name;

	public:
	/* Constructor */
	Zombie(void);

	/* Destructor */
	~Zombie(void);

	/* Member functions */
	void giveName(std::string name);
	std::string getName(void);
	void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif