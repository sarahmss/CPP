/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 02:22:34 by smodesto          #+#    #+#             */
/*   Updated: 2022/09/10 16:34:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_HPP
#define DEFINES_HPP

#define	MAX_CONT		8
#define	FIRSTNAME		"FirstName: "
#define	LASTNAME		"LastName: "
#define	NICKNAME		"NickName: "
#define	DARKESTSECRET	"DarkestSecret: "
#define	PHONENUMBER		"PhoneNumber: "
#define	INPUT_ERROR		"\x1B[31m!! Invalid input. The program only accepts ADD, SEARCH or EXIT commands !!\033[0m\t\t"
#define	ADD_OPTION		"\t[ADD]: to save a new contact \n"
#define	SEARCH_OPTION	"\t[SEARCH]: to display a specific contact \n"
#define EXIT_OPTION		"\t[EXIT]: to leave and lost all contacts \n \t\t \x1B[31m!! FOREVER !! \033[0m\t\t \n"
#define	LINE   "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
#define SEARCH_HEADER "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n|   Index  |First Name| Last Name| Nick Name|\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
#define SEARCH_EMPTY "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n \t Contacts list is empty\n     Please use ADD to add someone \n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
#endif

