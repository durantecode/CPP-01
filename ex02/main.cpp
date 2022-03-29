/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 00:17:20 by ldurante          #+#    #+#             */
/*   Updated: 2022/03/30 00:45:40 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "string address: " << &string << std::endl;
	std::cout << "stringPTR address: " << &(*stringPTR) << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;

	std::cout << "string using pointer: " << *stringPTR << std::endl;
	std::cout << "string using reference: " << stringREF << std::endl;
	return (0);
}