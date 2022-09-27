/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:11:23 by coder             #+#    #+#             */
/*   Updated: 2022/09/12 02:41:04 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string HumanName) : name(HumanName)
{
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}


void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack( void )
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	return ;
}
