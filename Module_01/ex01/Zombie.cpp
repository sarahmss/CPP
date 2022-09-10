/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:11:23 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 21:20:42 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	return ;
}

Zombie::Zombie( void )
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << "Killing "<< GetName() << "💀"<< std::endl;
	return ;
}

std::string	Zombie::GetName( void ) const
{
	return (this->_name);
}	

void		Zombie::SetName(std::string name)
{
	this->_name = name;
}
		
void	Zombie::announce( void )
{
	std::cout << GetName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}