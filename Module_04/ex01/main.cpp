/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:51:06 by coder             #+#    #+#             */
/*   Updated: 2022/10/21 20:02:48 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <stdio.h>
#include <stdlib.h>


int	main(void)
{
	Dog		dog;
	Cat		cat;
	
	dog.setIdea("🐶💡");
	cat.setIdea("🐱💡");
	std::cout << "======================== Dog Ideas =======================\n" << dog.getIdea() << std::endl;
	std::cout << "======================== Cat Ideas =======================\n" << cat.getIdea() << std::endl;

	std::cout << "======================== Making array of animals =======================\n" << std::endl;	

	Animal *animals[4];
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
std::cout << "======================== Cleaning array of animals =======================\n" << std::endl;	
	for (int j = 0; j < 4; j++)
		delete animals[j];
}