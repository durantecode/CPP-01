/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:42:40 by ldurante          #+#    #+#             */
/*   Updated: 2022/03/31 00:02:05 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	public:
	Karen();

	void complain(std::string level);
	
	~Karen();
};

#endif