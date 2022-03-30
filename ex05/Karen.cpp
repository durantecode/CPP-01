/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:42:29 by ldurante          #+#    #+#             */
/*   Updated: 2022/03/31 01:31:15 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {}

void Karen::debug(void)
{
	std::cout << "DEBUG: I love to get extra bacon for my 
		7XL-double-cheese-triple-pickle burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "INFO: I cannot believe adding extra bacon cost more money. 
		You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free.
		I've been coming here for years and you just started working here last month" << std::endl;
}

void Karen::error(void)
{
	std::cout << "ERROR: This is unacceptable, I want to speak to the manager now..." << std::endl;
}

void Karen::complain(std::string level)
{
	void (Karen::*functionsPointer[4])(void);

	functionsPointer[0] = &Karen::debug;
	functionsPointer[1] = &Karen::info;
	functionsPointer[2] = &Karen::warning;
	functionsPointer[3] = &Karen::error;

	std::string complaints[4] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++)
	{
		if (level == complaints[i])
			return (this->*functionsPointer[i])();		
 	}
	std::cout << "SCREAMS TO THE MANAGER FOR NO REASON" << std::endl;
}

Karen::~Karen() {}