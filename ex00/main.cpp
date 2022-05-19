/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:57:27 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/17 15:18:23 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie Michael("Michael");
	Michael.announce();
	
	Zombie *Steve = newZombie("Steve");
	Steve->announce();

	delete Steve;

	randomChump("John");
	return (0);
}
