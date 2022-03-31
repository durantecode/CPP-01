/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:42:29 by ldurante          #+#    #+#             */
/*   Updated: 2022/03/31 20:29:38 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {}

void Karen::debug(void)
{
	std::cout << "[DEBUG]"<< std::endl;
	std::cout << "I love to get extra bacon for my " 
		"7XL-double-cheese-triple-pickle burger. I just love it!" << std::endl;
	std::cout << std::endl;
}

void Karen::info(void)
{
	std::cout << "[INFO]"<< std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. " 
		"You don't put enough! If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "
		"I've been coming here for years and you just started working here last month" << std::endl;
	std::cout << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now..." << std::endl;
	std::cout << std::endl;
}

int Karen::getLevel(std::string level)
{
	int i;
	std::string complaints[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
	{
		if (level == complaints[i])
			break;
 	}
	return (i);
}

void Karen::complain(std::string level)
{
	int levelNum;
	void (Karen::*functionsPointer[4])(void);

	functionsPointer[0] = &Karen::debug;
	functionsPointer[1] = &Karen::info;
	functionsPointer[2] = &Karen::warning;
	functionsPointer[3] = &Karen::error;

	levelNum = getLevel(level);
	switch (levelNum)
	{
		case 0:
			(this->*functionsPointer[0])();
		case 1:
			(this->*functionsPointer[1])();
		case 2:
			(this->*functionsPointer[2])();
		case 3:
			(this->*functionsPointer[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

Karen::~Karen() {}