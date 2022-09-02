/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:40:50 by coder             #+#    #+#             */
/*   Updated: 2022/09/02 17:19:01 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

//---------------------------Constructor---------------------------------------
PhoneBook::PhoneBook(void)
{
	this->CurrentPos = -1;
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
	if (CurrentPos == MAX_CONT)
		CurrentPos = 0;
	return (CurrentPos);
}

int	PhoneBook::GetPos(void)
{
	for (int i = 0; i < MAX_CONT; i++)
	{
		if (this->ContactsList[i].isBlank())
			return (i);
	}
	return (LastPos());
}

void		PhoneBook::FormatColumn(std::string text)
{
	int len = 0;

	while (text[len] != '\0')
		len++;
	if (len == 10)
		std::cout << text;
	else if (len < 10)
	{
		for (int i = 0; i < (9 - len); i++)
			std::cout << " ";
		std::cout << text;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << text[i];
		std::cout << ".";
	}
}

void	PhoneBook::FormatLine(std::string fn, std::string ln, std::string nn, int index)
{
	std::cout << "|";
	std::cout << "        " << index;
	std::cout << "|";
	FormatColumn(fn);
	std::cout << "|";
	FormatColumn(ln);
	std::cout << "|";
	FormatColumn(nn);
	std::cout << "|";
	std::cout << std::endl;
}

void	PhoneBook::InitPrompt(void)
{
	std::cout << LINE ;
	std::cout << "\t \x1B[97m Welcome to the 80s Phonebook !!\033[0m\t\t \n";
	std::cout << "\x1B[97m   You can insert one of three commands\033[0m";
	std::cout << "\x1B[31m (AND ONLY THEM) \033[0m\t\t";
	std::cout << LINE ;
	std::cout << ADD_OPTION;
	std::cout << SEARCH_OPTION;
	std::cout << EXIT_OPTION;
	return ;
}

bool	PhoneBook::SearchAux(void)
{
	int			index = -1;
	std::string	buffer;

	while ((index <= 0 || index > MAX_CONT) || (this->ContactsList[index - 1].isBlank() == true))
	{
		std::cout << "Insert a contact index previously listed: ";
		std::getline(std::cin, buffer);
		index = atoi(buffer.c_str());
	}
	if ((index > 0 || index < MAX_CONT) || (this->ContactsList[index - 1].isBlank() == false))
		this->ContactsList[index - 1].PrintContact();
	return (true);
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
	if (this->ContactsList[0].isBlank() == true)
	{
		std::cout << SEARCH_EMPTY;
		return (true);
	}
	std::cout << SEARCH_HEADER;
	for (int i = 0; i < MAX_CONT && this->ContactsList[i].isBlank() == false; i++)
	{
		FormatLine(this->ContactsList[i].GetFirstName(), this->ContactsList[i].GetLastName(), this->ContactsList[i].GetNickName(), i + 1);
	}
	return (SearchAux());
}

bool	PhoneBook::Exit(void)
{
	exit(0);
}
