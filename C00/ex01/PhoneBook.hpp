/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:50:06 by smodesto          #+#    #+#             */
/*   Updated: 2022/08/24 02:58:54 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

using	std::string;
using	std::cout;
using	std::cin;
using	std::endl;

class PhoneBook
{
	public:
		Contact	ContactsList[8];
		Contact	NewContact()
		{
			string	FirstName;
			string	LastName;
			string	NickName;
			string	DarkestSecret;
			int		PhoneNumber;

			cout << "To add a new contact into the PhoneBook insert:" ;
			cout << "\nContact first name: ";
			cin >> FirstName;
			cout << "\nContact last name: ";
			cin >> LastName;
			cout << "\nContact nickname: ";
			cin >> NickName;
			cout << "\nContact darkest secret: ";
			cin >> DarkestSecret;
			cout << "\nContact phone number: ";
			cin >> PhoneNumber;
			Contact	NewContact = Contact(FirstName, LastName, NickName,
				DarkestSecret, PhoneNumber);
			return (NewContact);
		}
};

#endif
