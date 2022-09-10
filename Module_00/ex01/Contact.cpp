/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 02:55:40 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 16:31:30 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

//---------------------------Constructor---------------------------------------
Contact::Contact(void)
{
	return ;
}
//---------------------------Destructor---------------------------------------
Contact::~Contact(void)
{
	return ;
}

//---------------------------Getters---------------------------------------
std::string	Contact::GetFirstName(void) const
{
	return (this->FirstName);
}
std::string	Contact::GetLastName(void) const
{
	return (this->LastName);
}
std::string	Contact::GetNickName(void) const
{
	return (this->NickName);
}
std::string	Contact::GetDarkestSecret(void) const
{
	return (this->DarkestSecret);
}
std::string	Contact::GetPhoneNumber(void) const
{
	return (this->PhoneNumber);
}

//---------------------------Setters---------------------------------------
void		Contact::SetFirstName(std::string firstname)
{
	while (firstname == "")
	{
		std::cout << FIRSTNAME;
		std::getline(std::cin, firstname);
	}
	this->FirstName = firstname;
}
void		Contact::SetLastName(std::string lastname)
{
	while (lastname == "")
	{
		std::cout << LASTNAME;
		std::getline(std::cin, lastname);
	}
	this->LastName = lastname;
}
void		Contact::SetNickName(std::string nickname)
{
	while (nickname == "")
	{
		std::cout << NICKNAME;
		std::getline(std::cin, nickname);
	}
	this->NickName = nickname;
}
void		Contact::SetDarkestSecret(std::string darkestsecret)
{
	while (darkestsecret == "")
	{
		std::cout << DARKESTSECRET;
		std::getline(std::cin, darkestsecret);
	}
	this->DarkestSecret = darkestsecret;
}
void		Contact::SetPhoneNumber(std::string phonenumber)
{
	bool	valid = false;
	
	while (phonenumber == "" || valid == false)
	{
		std::cout << PHONENUMBER;
		std::getline(std::cin, phonenumber);
		if (phonenumber.find_first_not_of("0123456789") == std::string::npos)
			valid = true;
		else
			std::cout << "\x1B[31m insert a numeric phone number \033[0m\t\t" << std::endl;
	}
	this->PhoneNumber = phonenumber;
}

//---------------------------Utils---------------------------------------
void	Contact::PrintContact(void)
{
	std::cout << FIRSTNAME << this->GetFirstName() << std::endl;
	std::cout << LASTNAME << this->GetLastName() << std::endl;
	std::cout << NICKNAME << this->GetNickName() << std::endl;
	std::cout << DARKESTSECRET << this->GetDarkestSecret() << std::endl;
	std::cout << PHONENUMBER << this->GetPhoneNumber() << std::endl;
}

bool	Contact::isBlank(void)
{
	if (this->GetFirstName() != "")
		return (false);
	if (this->GetLastName() != "")
		return (false);
	if (this->GetNickName() != "")
		return (false);
	if (this->GetDarkestSecret() != "")
		return (false);
	if (this->GetPhoneNumber() != "")
		return (false);
	return (true);
}
