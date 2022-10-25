/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:51:06 by coder             #+#    #+#             */
/*   Updated: 2022/10/21 20:03:15 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <stdio.h>
#include <stdlib.h>


int	main(void)
{
	// Animal	*abstractAnimal =  new Animal(); allocating an object of abstract class type 'Animal'
	
	std::cout << "======================== Default constructors =======================\n" << std::endl;
	Dog		*dog = new Dog();
	Cat		*cat = new Cat();
	
	dog->setIdea("🐶💡");
	cat->setIdea("🐱💡");
	std::cout << "======================== Dog Ideas =======================\n" << dog->getIdea() << std::endl;
	std::cout << "======================== Cat Ideas =======================\n" << cat->getIdea() << std::endl;
	
	std::cout << "======================== Copy constructors =======================\n" << std::endl;
	Dog		*copyDog = new Dog(*dog);
	Cat		*copyCat = new Cat(*cat);
	std::cout << "======================== CopyDog Ideas =======================\n" << copyDog->getIdea() << std::endl;
	std::cout << "======================== CopyCat Ideas =======================\n" << copyCat->getIdea() << std::endl;

	std::cout << "======================== Cleaning =======================\n" << cat->getIdea() << std::endl;
	delete copyDog;
	delete copyCat;
	
	delete dog;
	delete cat;

}