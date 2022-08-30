/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 02:55:40 by coder             #+#    #+#             */
/*   Updated: 2022/08/24 03:33:29 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

//---------------------------Getters---------------------------------------
std::string	GetFirstName(void) const
{
	return (this->FirstName);
}
std::string	GetLastName(void) const
{
	return (this->LastName);
}
std::string	GetNickName(void) const
{
	return (this->NickName);
}
std::string	GetDarkestSecret(void) const
{
	return (this->DarkestSecrete);
}
int			GetPhoneNumber(void) const
{
	return (this->PhoneNumber);
}

//---------------------------Setters---------------------------------------
void		SetFirstName(std::string firstname)
{
		std::cout << "First Name";
		std::getline(std::cin, firstname);
		this->FirstName = firstname;
}
void		SetLastName(std::string lastname)
{
		std::cout << FIRSTNAME;
	std::getline(std::cin, buffer);
	this->_firstName = buffer;
}
void		SetNickName(std::string nickname)
{
		std::cout << FIRSTNAME;
	std::getline(std::cin, buffer);
	this->_firstName = buffer;
}
void		SetDarkestSecret(std::string darkestsecret)
{
		std::cout << FIRSTNAME;
	std::getline(std::cin, buffer);
	this->_firstName = buffer;
}
void		SetPhoneNumber(int phonenumber)
{
		std::cout << FIRSTNAME;
	std::getline(std::cin, buffer);
	this->_firstName = buffer;
}
