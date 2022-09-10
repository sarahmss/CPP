/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:13:41 by smodesto          #+#    #+#             */
/*   Updated: 2022/08/23 05:12:02 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

using	std::string;
using	std::cout;
using	std::endl;

class Employee // Do not represents data, but a blueprint
{
	public:
		string	Name;
		string	Company;
		int		Age;

		void	IntroduceYourself()
		{
			cout << "Name:" << Name << endl;
			cout << "Company:" << Company << endl;
			cout << "Age:" << Age << endl;
		}

		Employee(string name, string company, int age)
		{
			Name = name;
			Company = company;
			Age = age;
		}
};


#endif
