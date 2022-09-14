/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 02:52:48 by smodesto          #+#    #+#             */
/*   Updated: 2022/09/12 23:44:46 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_HPP
#define INCLUDES_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <cstring>

# define	PARAMERROR	"ERROR - Usage: <./Replace filename s1 s2>"
# define	IOERROR		"ERROR - Opening files"
std::string	ft_str_replace(std::string orig, std::string rep, std::string with);

#endif
