/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:50:06 by smodesto          #+#    #+#             */
/*   Updated: 2022/09/02 17:03:04 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "./Contact.hpp"
#include <string>


class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		bool	Add(void);
		bool	Search(void);
		bool	Exit(void);
		void	InitPrompt(void);

	private:
		Contact	ContactsList[MAX_CONT];
		int		CurrentPos;
		int		GetPos(void);
		int		LastPos(void);
		void	FormatColumn(std::string text);
		void	FormatLine(std::string fn, std::string ln, std::string nn, int index);
		bool	SearchAux(void);
};

#endif
