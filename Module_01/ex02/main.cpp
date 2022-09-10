/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:35:40 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 21:35:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Memory address of the string variable: "	<< &string			<< std::endl;
	std::cout << "Memory address held by stringPTR: "		<< stringPTR		<< std::endl;
	std::cout << "Memory address held by stringREF: "		<< &stringREF		<< std::endl;

	std::cout << "Value of the string variable: "			<< string			<< std::endl;
	std::cout << "Value pointed to by stringPTR: "			<< *stringPTR		<< std::endl;
	std::cout << "Value pointed to by stringREF: "			<< stringREF		<< std::endl;
}