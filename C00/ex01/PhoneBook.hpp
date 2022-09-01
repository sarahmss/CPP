/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:50:06 by smodesto          #+#    #+#             */
/*   Updated: 2022/09/01 02:20:37 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "./Contact.hpp"

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
		Contact	ContactsList[8];
		int		CurrentPos;
		int		GetPos(void);
		int		LastPos(void);
};

#endif
