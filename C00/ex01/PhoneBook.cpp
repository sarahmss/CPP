/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:40:50 by coder             #+#    #+#             */
/*   Updated: 2022/09/01 02:26:37 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

//---------------------------Constructor---------------------------------------
PhoneBook::PhoneBook(void)
{
	return ;
}

//---------------------------Destructor---------------------------------------
PhoneBook::~PhoneBook(void)
{
	return ;
}


//---------------------------Utils---------------------------------------
int	PhoneBook::LastPos(void)
{
	CurrentPos++;
	if (CurrentPos == 8)
		CurrentPos = 0;
	return (CurrentPos);
}

int	PhoneBook::GetPos(void)
{
	for (int i = 0; i < 8; i++)
	{
		if (this->ContactsList[i].isBlank())
			return (i);
	}
	return (LastPos());
}

void	PhoneBook::InitPrompt(void)
{
	std::cout << "Welcome coder" << std::endl;
	return ;
}
//---------------------------Commands---------------------------------------

bool	PhoneBook::Add(void)
{
	Contact		NewContact;
	std::string	buffer;

	NewContact.SetFirstName(buffer);
	NewContact.SetLastName(buffer);
	NewContact.SetNickName(buffer);
	NewContact.SetDarkestSecret(buffer);
	NewContact.SetPhoneNumber(buffer);
	this->ContactsList[GetPos()] = NewContact;
	return (true);
}

bool	PhoneBook::Search(void)
{
	return (true);
}

bool	PhoneBook::Exit(void)
{
	return (true);
}
