/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 03:48:31 by smodesto          #+#    #+#             */
/*   Updated: 2022/08/31 04:09:36 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

int	main(void)
{
	Contact	c1;

	c1.SetFirstName("fn");
	c1.SetLastName("ln");
	c1.SetNickName("nn");
	c1.SetDarkestSecret("ds");
	c1.SetPhoneNumber("pn");
	c1.PrintContact();
}
