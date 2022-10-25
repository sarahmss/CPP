/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:25:42 by coder             #+#    #+#             */
/*   Updated: 2022/10/25 02:51:26 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"	
# include "RobotomyRequestForm.hpp"		
# include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat				*B1; 
	ShrubberyCreationForm	*S1; // 145 137
	RobotomyRequestForm		*R1; // 72  45
	PresidentialPardonForm	*P1; // 25  5
	
	std::cout << "--------------------------------- SHRUBBERRY TESTS ------------------------------------------" << std::endl;

	std::cout << "---- Test 1 (bureaucrat Grade[136]) able to execute and sign ----" << std::endl;
	try {
		B1 = new Bureaucrat(136, "Liz");
		S1 = new ShrubberyCreationForm("Tree");
		std::cout << *B1;
		std::cout << *S1;
		S1->beSigned(*B1);
		S1->signForm(*B1);
		B1->executeForm(*S1);
		delete B1;
		delete S1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;			
	}

	std::cout << "---- Test 2 (bureaucrat Grade[144]) able to sign  unable to execute ----" << std::endl;
	try {
		B1 = new Bureaucrat(144, "Liz");
		S1 = new ShrubberyCreationForm("Tree");
		std::cout << *B1;
		std::cout << *S1;
		S1->beSigned(*B1);
		S1->signForm(*B1);
		B1->executeForm(*S1);
		delete B1;
		delete S1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		delete B1;
		delete S1;		
	}

	std::cout << "---- Test 3 (bureaucrat Grade[150]) unable to sign or execute ----" << std::endl;
	try {
		B1 = new Bureaucrat(150, "Liz");
		S1 = new ShrubberyCreationForm("Tree");
		std::cout << *B1;
		std::cout << *S1;
		S1->beSigned(*B1);
		S1->signForm(*B1);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
		S1->signForm(*B1);
		B1->executeForm(*S1);
		delete B1;
		delete S1;
	}

	std::cout << "--------------------------------- ROBOTOMY TESTS ------------------------------------------" << std::endl;

	std::cout << "---- Test 4 (bureaucrat Grade[44]) able to execute and sign ----" << std::endl;
	try {
		B1 = new Bureaucrat(44, "Liz");
		R1 = new RobotomyRequestForm("Request");
		std::cout << *B1;
		std::cout << *R1;
		R1->beSigned(*B1);
		R1->signForm(*B1);
		B1->executeForm(*R1);
		delete B1;
		delete R1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}

	std::cout << "---- Test 5 (bureaucrat Grade[71]) able to sign  unable to execute ----" << std::endl;
	try {
		B1 = new Bureaucrat(71, "Liz");
		R1 = new RobotomyRequestForm("Request");
		std::cout << *B1;
		std::cout << *R1;
		R1->beSigned(*B1);
		R1->signForm(*B1);
		B1->executeForm(*R1);
		delete B1;
		delete R1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		delete B1;
		delete S1;	
	}

	std::cout << "---- Test 6 (bureaucrat Grade[73]) unable to sign or execute ----" << std::endl;
	try {
		B1 = new Bureaucrat(73, "Liz");
		R1 = new RobotomyRequestForm("Request");
		std::cout << *B1;
		std::cout << *R1;
		R1->beSigned(*B1);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		R1->signForm(*B1);
		B1->executeForm(*R1);
		delete B1;
		delete R1;	
	}
	std::cout << "--------------------------------- PRESIDENTIAL TESTS ------------------------------------------" << std::endl;

	std::cout << "---- Test 7 (bureaucrat Grade[4]) able to execute and sign ----" << std::endl;
	try {
		B1 = new Bureaucrat(4, "Liz");
		P1 = new PresidentialPardonForm("Gim");
		std::cout << *B1;
		std::cout << *P1;
		P1->beSigned(*B1);
		P1->signForm(*B1);
		B1->executeForm(*P1);
		delete B1;
		delete P1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}

	std::cout << "---- Test 8 (bureaucrat Grade[24]) able to sign  unable to execute ----" << std::endl;
	try {
		B1 = new Bureaucrat(24, "Liz");
		P1 = new PresidentialPardonForm("Gim");
		std::cout << *B1;
		std::cout << *P1;
		P1->beSigned(*B1);
		P1->signForm(*B1);
		B1->executeForm(*P1);
		delete B1;
		delete P1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		delete B1;
		delete P1;	
	}

	std::cout << "---- Test 9 (bureaucrat Grade[26]) unable to sign or execute ----" << std::endl;
	try {
		B1 = new Bureaucrat(26, "Liz");
		P1 = new PresidentialPardonForm("Gim");
		std::cout << *B1;
		std::cout << *P1;
		P1->beSigned(*B1);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		P1->signForm(*B1);
		B1->executeForm(*P1);
		delete B1;
		delete P1;	
	}

}
