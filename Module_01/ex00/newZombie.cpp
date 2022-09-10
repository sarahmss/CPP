/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:22:16 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 20:58:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
 
Zombie*	newZombie( std::string name )
{
	Zombie	*NewZombie = new Zombie(name);
	
	return(NewZombie);
}