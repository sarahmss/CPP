/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 02:55:40 by coder             #+#    #+#             */
/*   Updated: 2022/08/31 04:02:10 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

//---------------------------Constructor---------------------------------------
Contact::Contact(void)
{
	std::cout << "building contact" << std:endl;
	return ;
}
//---------------------------Destructor---------------------------------------
Contact::~Contact(void)
{
	std::cout << "Destroyng contact" << std:endl;
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
	return (this->DarkestSecrete);
}
int			GetPhoneNumber(void) const
{
	return (this->PhoneNumber);
}

//---------------------------Setters---------------------------------------
void		Contact::SetFirstName(std::string firstname)
{
		std::cout << FIRSTNAME
		std::getline(std::cin, firstname);
		this->FirstName = firstname;
}
void		Contact::SetLastName(std::string lastname)
{
	std::cout << LASTNAME;
	std::getline(std::cin, lastname);
	this->LastName = lastname;
}
void		Contact::SetNickName(std::string nickname)
{
	std::cout << NICKNAME;
	std::getline(std::cin, nickname);
	this->NickName = nickname;
}
void		Contact::SetDarkestSecret(std::string darkestsecret)
{
	std::cout << DARKESTSECRET;
	std::getline(std::cin, darkestsecret);
	this->DarkestSecret = darkestsecret;
}
void		Contact::SetPhoneNumber(std::string phonenumber)
{
	std::cout << PHONENUMBER;
	std::getline(std::cin, phonenumber);
	this->PhoneNumber = PhoneNumber;
}

//---------------------------Utils---------------------------------------
void	Contact::PrintContact(void)
{
	std::cout << FIRSTNAME << this->GetFirstName() << std::endl;
	std::cout << LASTNAME << this->GetLastName() << std::endl;
	std::cout << NICKNAME << this->GetNickName() << std::endl;
	std::cout << PHONENUMBER << this->GetPhoneNumber() << std::endl;
	std::cout << DARKESTSECRET << this->GetDarkestSecret() << std::endl;
}
