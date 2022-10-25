/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:51:06 by coder             #+#    #+#             */
/*   Updated: 2022/10/21 19:24:58 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	tests ( void )
{
	std::cout << "-------------------------------- Default Constructors--------------------" << std::endl << std::endl;
	Dog *defaultDog = new Dog();
	Cat *defaultCat = new Cat();
	Animal *defaultAnimal = new Animal();

	defaultDog->makeSound();
	defaultCat->makeSound();
	defaultAnimal->makeSound();
	std::cout << "----------------------------------Copy Constructor------------------------------" << std::endl << std::endl;
	Dog *copyDog = new Dog(*defaultDog);
	Cat *copyCat = new Cat(*defaultCat);
	Animal *copyAnimal = new Animal(*defaultAnimal);

	copyDog->makeSound();
	copyCat->makeSound();
	copyAnimal->makeSound();	

	std::cout << "-----------------------------Destructors------------------------------" << std::endl << std::endl;
	delete defaultDog;
	delete defaultCat;
	delete defaultAnimal;
	delete copyDog;
	delete copyCat;
	delete copyAnimal;
}

void	subject_tests( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();
	
	std::cout << j->getType() << " :";
	j->makeSound();
	std::cout << i->getType() << " :"; 
	i->makeSound(); 
	std::cout << meta->getType() << ": ";
	meta->makeSound();
	std::cout << k->getType() << ": "; 
	k->makeSound(); 
	std::cout << l->getType() << ": ";
	l->makeSound();

	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
}

int	main(void)
{
	std::string	mood;

	std::cout << "Execute subject tests? [yes/no] : ";
	std::cin >> mood;
	if (!mood.compare("yes"))
		subject_tests();
	else
		tests();
}