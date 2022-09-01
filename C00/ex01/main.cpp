/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 03:48:31 by smodesto          #+#    #+#             */
/*   Updated: 2022/09/01 02:27:15 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

static bool	ValidCommand(std::string input, PhoneBook *pb)
{
	if (input == "ADD")
		return (pb->Add());
	if (input == "SEARCH")
		return (pb->Search());
	if (input == "EXIT")
		return (pb->Exit());
	return (false);
}

static void	InitPhoneBook(void)
{
	PhoneBook	pb;
	std::string	buffer;

	while (true)
	{
		pb.InitPrompt();
		std::getline(std::cin, buffer);
		if (ValidCommand(buffer, &pb) == false)
			std::cout << INPUT_ERROR << std::endl;
	}
}

int	main(void)
{
	InitPhoneBook();
	return (0);
}
