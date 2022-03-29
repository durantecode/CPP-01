/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:51:53 by ldurante          #+#    #+#             */
/*   Updated: 2022/03/30 00:13:30 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int numberZombies;

	numberZombies = 5;
	Zombie *Horde = zombieHorde(numberZombies, "steve");
	Horde[2].giveName("george");
	for (int i = 0; i < numberZombies; i++)
		Horde[i].announce();
	delete[] Horde;
	return (0);
}