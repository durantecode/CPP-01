/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 00:57:57 by ldurante          #+#    #+#             */
/*   Updated: 2022/03/30 17:48:27 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

/* Human B is not always armed with a weapon, so we store his weapon as a pointer,
this way it can store null when calling the constructor.

We pass as reference to avoid copying big objects hence we don't allocate extra heap
memory so we optimize performance */

int main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("knife");
		bob.attack();
	}
	{
		Weapon club = Weapon("shitty club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("spoon");
		jim.attack();
	}
	return (0);
}