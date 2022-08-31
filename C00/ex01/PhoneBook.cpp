/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:40:50 by coder             #+#    #+#             */
/*   Updated: 2022/09/01 01:17:33 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

//---------------------------Constructor---------------------------------------
PhoneBook::PhoneBook(void)
{
	std::cout << "Building PhoneBook" << std::endl;
	return ;
}

//---------------------------Destructor---------------------------------------
PhoneBook::~PhoneBook(void)
{
	std::cout << "Destroiyng PhoneBook" << std::endl;
	return ;
}


//---------------------------Utils---------------------------------------
int	PhoneBook::get_pos(void)
{
	for (int i = 0; i < 8; i++)
	{
		if (this->ContactsList[i].isBlank())
			return (i);
	}
	return ;
}

//---------------------------Commands---------------------------------------

bool	PhoneBook::add(void)
{
	Contact		NewContact;
	std:string	buffer;

	NewContact.SetFirstName(buffer);
	NewContact.SetLastName(buffer);
	NewContact.SetNickName(buffer);
	NewContact.SetDarkestSecret(buffer);
	NewContact.SetPhoneNumber(buffer);
	this->ContactsList[get_pos()] = NewContact;
	return ;
}

bool	PhoneBook::search(void)
{
	return ;
}

bool	PhoneBook::exit(void)
{
	return ;
}
