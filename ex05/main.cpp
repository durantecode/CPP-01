/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:41:32 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/17 16:08:37 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
	Karen karen;

	karen.complain("debug");
	karen.complain("info");
	karen.complain("warning");
	karen.complain("error");
	karen.complain("screams");
	return (0);
}
