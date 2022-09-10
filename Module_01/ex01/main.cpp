/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:35:40 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 21:22:10 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main(void)
{
	int		ZombieNum = 7;

	Zombie	*Horde = zombieHorde(ZombieNum, "August");
	for (int i = 0; i < ZombieNum; i++)
	{
		std::cout << "🧟[" << i <<"]";
		Horde[i].announce();
	}
	delete [] Horde;
}