/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:41:32 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/17 15:51:13 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karenFilter;
	std::string level;

	if (argc != 2)
	{
		std::cout << "error: usage: ./karenFilter [level]" << std::endl;
		return (1);
	}
	level = argv[1];
	karenFilter.complain(level);
	return (0);
}
