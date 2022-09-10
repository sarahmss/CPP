/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:22:07 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 21:19:30 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "Zombie.hpp"
 
Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*ZombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		ZombieHorde[i].SetName(name);

	}	
	return (ZombieHorde);
}

