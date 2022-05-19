/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:54:20 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/17 15:20:51 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombieHorde[i].giveName(name);
	return (zombieHorde);
}
