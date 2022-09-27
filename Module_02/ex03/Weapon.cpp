/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:22:07 by coder             #+#    #+#             */
/*   Updated: 2022/09/12 02:37:37 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon( void )
{
	return ;
}


Weapon::Weapon( std::string WeaponType ) :  type(WeaponType)
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}

const std::string&	Weapon::getType( void )
{
	std::string&	typeRef = this->type;
	return (typeRef);
}

void		Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}
