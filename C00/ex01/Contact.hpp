/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:42:12 by smodesto          #+#    #+#             */
/*   Updated: 2022/08/30 20:17:05 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "includes.hpp"

/*
	In contact class we will be using privates member attributes and public
	member functions -such as getters, setters, constructors and destructors-
	to compose it.

	Each getter function must be declared as const meaning that the variable's value will not be changed once the variable has been initialized by setters.
*/
class Contact
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	DarkestSecret;
		std::string	PhoneNumber;

	public:

		Contact();
		~Contact();

		std::string	GetFirstName(void) const;
		std::string	GetLastName(void) const;
		std::string	GetNickName(void) const;
		std::string	GetDarkestSecret(void) const;
		std::string	GetPhoneNumber(void) const;

		void		SetFirstName(std::string firstname);
		void		SetLastName(std::string lastname);
		void		SetNickName(std::string nickname);
		void		SetDarkestSecret(std::string darkestsecret);
		void		SetPhoneNumber(std::string phonenumber);

		void		PrintContact(void);
};

#endif
