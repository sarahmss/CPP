/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:22:07 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 20:58:46 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "Zombie.hpp"
 
void	randomChump( std::string name )
{
	Zombie	NewZombie = Zombie(name);
	
	NewZombie.announce();
}
