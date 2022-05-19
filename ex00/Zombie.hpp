/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:57:15 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/17 15:18:31 by ldurante         ###   ########.fr       */
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
	Zombie(std::string name);

	/* Destructor */
	~Zombie( void );

	/* Member functions */
	void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
