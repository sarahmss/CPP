/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:11:23 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 22:07:46 by coder            ###   ########.fr       */
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


void	HumanB::setWeapon(Weapon weapon)
{
	this->weapon.setType(weapon.getType()); 
}	

void	HumanB::attack( void )
{
	std::cout << this->name << "attacks with their" << this->weapon.getType() << std::endl;
	return ;
}