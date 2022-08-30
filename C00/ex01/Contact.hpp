/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:42:12 by smodesto          #+#    #+#             */
/*   Updated: 2022/08/24 03:12:06 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	DarkestSecret;
		int			PhoneNumber;

	public:
		std::string	GetFirstName(void) const;
		std::string	GetLastName(void) const;
		std::string	GetNickName(void) const;
		std::string	GetDarkestSecret(void) const;
		int			GetPhoneNumber(void) const;

		void		SetFirstName(std::string firstname);
		void		SetLastName(std::string lastname);
		void		SetNickName(std::string nickname);
		void		SetDarkestSecret(std::string darkestsecret);
		void		SetPhoneNumber(int phonenumber);
};

#endif
