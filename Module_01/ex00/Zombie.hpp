/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:42:12 by smodesto          #+#    #+#             */
/*   Updated: 2022/09/10 21:40:26 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class Zombie
{
	private:
		std::string	_name;
		
	public:
		Zombie(std::string name);
		~Zombie();
		
		std::string	GetName( void ) const;
		void		SetName(std::string name);
		
		void		announce( void ); 
};

Zombie*		newZombie( std::string name );
void		randomChump( std::string name );

#endif
