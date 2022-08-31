/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:50:06 by smodesto          #+#    #+#             */
/*   Updated: 2022/09/01 01:12:25 by smodesto         ###   ########.fr       */
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
		PhoneBook(void);
		~PhoneBook(void);

		bool	add(void);
		bool	search(void);
		bool	exit(void);

	private:
		Contact	ContactsList[8];
		int	PhoneBook::get_pos(void);

};

#endif
