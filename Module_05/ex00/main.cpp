/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:25:42 by coder             #+#    #+#             */
/*   Updated: 2022/10/22 03:22:48 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat *B1;
	
	std::cout << "---- Test 0 (Grade 0) ----" << std::endl; // should not create Liz
	try {
		B1 = new Bureaucrat(0, "Liz");
		std::cout << *B1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;			
	}
	std::cout << "---- Test 1 (Grade 151) ----" << std::endl; // should not create Liz
	try {
		B1 = new Bureaucrat(151, "Liz");
		std::cout << *B1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;			
	}
	std::cout << "---- Test 2 (Grade 20) ----" << std::endl; 
	try {
		B1 = new Bureaucrat(20, "Liz");
		std::cout << *B1;
		delete B1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;			
	}
	std::cout << "---- Test 3 (Grade 20 increment) ----" << std::endl;
	try {
		B1 = new Bureaucrat(20, "Liz");
		std::cout << *B1;
		B1->increment();
		std::cout << *B1;
		delete B1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;			
	}
	std::cout << "---- Test 3 (Grade 20 decrement) ----" << std::endl;
	try {
		B1 = new Bureaucrat(20, "Liz");
		std::cout << *B1;
		B1->decrement();
		std::cout << *B1;
		delete B1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;			
	}
	std::cout << "---- Test 4 (Grade 150 decrement) ----" << std::endl; // should not create Liz
	try {
		B1 = new Bureaucrat(150, "Liz");
		std::cout << *B1;
		B1->decrement();
		std::cout << *B1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;			
		delete B1;
	}
	std::cout << "---- Test 5 (Grade 1 increment) ----" << std::endl; // should not create Liz
	try {
		B1 = new Bureaucrat(1, "Liz");
		std::cout << *B1;
		B1->increment();
		std::cout << *B1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;			
		delete B1;
	}
	std::cout << "---- Test 6 (Grade 5 loop increment) ----" << std::endl; // should not create Liz
	try {
		B1 = new Bureaucrat(5, "Liz");
		std::cout << *B1;
		while(B1->getGrade() != 1)
			B1->increment();
		std::cout << *B1;
		B1->increment();
		std::cout << *B1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;			
		delete B1;
	}
	std::cout << "---- Test 7 (Grade 145 loop decrement) ----" << std::endl; // should not create Liz
	try {
		B1 = new Bureaucrat(145, "Liz");
		std::cout << *B1;
		while(B1->getGrade() != 150)
			B1->decrement();
		std::cout << *B1;
		B1->decrement();
		std::cout << *B1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;			
		delete B1;
	}
	return 0;
}
