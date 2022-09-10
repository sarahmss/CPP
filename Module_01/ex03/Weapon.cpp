/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:22:07 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 22:08:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon( std::string type ) :  type(WeaponType)
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}

std::string	Weapon::getType( void ) const
{
	std::string	typeRef;

	typeRef = &this->type;
	return (typeRef);
}

void		Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}	