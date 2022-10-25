/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:25:42 by coder             #+#    #+#             */
/*   Updated: 2022/10/22 08:50:38 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int	main(void)
{
	Bureaucrat		*B1;
	Form		 	*F1;
	
	std::cout << "-----------------------------------OUT OF RANGE ------------------------------------------" << std::endl;	
	std::cout << "---- Test 1.0 (form signGrade[151]) ----" << std::endl;
	try {
		F1 = new Form("Requisition", 151, 2);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;			
	}
	std::cout << "---- Test 1.1 (form executeGrade[151]) ----" << std::endl;
	try {
		F1 = new Form("Requisition", 151, 0);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;			
	}
	
	std::cout << "---- Test 2.0 (form signGrade[0]) ----" << std::endl;
	try {
		F1 = new Form("Requisition", 0, 2);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;			
	}
	std::cout << "---- Test 2.1 (form executeGrade[0]) ----" << std::endl;
	try {
		F1 = new Form("Requisition", 2, 0);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;			
	}
	

	std::cout << "-----------------------------------SHOULD SIGN IT ------------------------------------------" << std::endl;
	std::cout << "---- Test 3 (bureaucrat Grade[3] | form signGrade[5]) ----" << std::endl;
	try {
		B1 = new Bureaucrat(3, "Liz");
		F1 = new Form("Requisition", 5, 2);
		std::cout << *B1;
		std::cout << *F1;
		F1->beSigned(*B1);
		F1->signForm(*B1);
		delete B1;
		delete F1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;			
	}
	
	std::cout << "-----------------------------------SHOULD NOT SIGN IT ------------------------------------------" << std::endl;
	std::cout << "---- Test 4 (bureaucrat Grade[6] | form signGrade[5]) ----" << std::endl; 
	try {
		B1 = new Bureaucrat(6, "Liz");
		F1 = new Form("Requisition", 5, 2);
		std::cout << *B1;
		std::cout << *F1;
		F1->beSigned(*B1);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;			
		F1->signForm(*B1);
		delete B1;
		delete F1;
	}
	return 0;
}
