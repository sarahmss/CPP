/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:25:42 by coder             #+#    #+#             */
/*   Updated: 2022/10/25 01:58:02 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"	
# include "RobotomyRequestForm.hpp"		
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int	main(void)
{
	Bureaucrat	*B1 = new Bureaucrat(1, "CEO");
	Form		*F1;
	Intern		*I1 =  new Intern();;

	
	std::cout << *B1; 
	std::cout << "---- Test  0 shrubbery creation form (all min) ----" << std::endl;
	F1 = I1->makeForm("shrubbery creation", "Liz");
	std::cout << *F1;
	F1->beSigned(*B1);
	F1->signForm(*B1);
	B1->executeForm(*F1);
	delete F1;	
	std::cout << "---- Test  1 shrubbery creation form (upper char) ----" << std::endl;
	F1 = I1->makeForm("shrubbery CREAtiON", "Liz");
	std::cout << *F1;
	F1->beSigned(*B1);
	F1->signForm(*B1);
	B1->executeForm(*F1);
	delete F1;
	std::cout << "---- Test 4 robotomy request form (upper char) ----" << std::endl;
	F1 = I1->makeForm("RoBoTomy ReQUEst", "Liz");
	std::cout << *F1;
	F1->beSigned(*B1);
	F1->signForm(*B1);
	B1->executeForm(*F1);
	delete F1;
	std::cout << "---- Test  5 robotomy request form (low char) ----" << std::endl;
	F1 = I1->makeForm("robotomy request", "Liz");
	std::cout << *F1;
	F1->beSigned(*B1);
	F1->signForm(*B1);
	B1->executeForm(*F1);
	delete F1;
	std::cout << "---- Test 6 presidential pardon form (upper char) ----" << std::endl;
	F1 = I1->makeForm("PresiDenTIAL pardON", "Liz");
	std::cout << *F1;
	F1->beSigned(*B1);
	F1->signForm(*B1);
	B1->executeForm(*F1);
	delete F1;
	std::cout << "---- Test  7 presidential pardon form (low char) ----" << std::endl;
	F1 = I1->makeForm("presidential pardon", "Liz");
	std::cout << *F1;
	F1->beSigned(*B1);
	F1->signForm(*B1);
	B1->executeForm(*F1);
	delete F1;
	delete B1;	
	delete I1;	
}
