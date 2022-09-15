/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:11:23 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 21:03:53 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << DEBUG << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << INFO << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << WARNING << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << ERROR << std::endl;
}

void Harl::complain( std::string level )
{
	std::string	Level[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (!Level[i].compare(level))
		{
			switch (i)
			{
				case 0:
					this->debug();
				case 1:
					this->info();
				case 2:
					this->warning();
				case 3:
					this->error();
					return ;
				default :
					std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
					return ;
			}
		}
	}
}
