/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:35:40 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 21:02:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

static	void CallHeapZombie(Zombie *zombie)
{
	zombie->announce();
	return ;
}

int	main(void)
{
	Zombie	StackZombie = Zombie("Bernard");
	StackZombie.announce();
	
	Zombie	*HeapZombie = newZombie("August");
	CallHeapZombie(HeapZombie);
	delete	HeapZombie;	

	randomChump("Claudio");
}