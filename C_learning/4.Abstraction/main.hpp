/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:13:41 by smodesto          #+#    #+#             */
/*   Updated: 2022/08/23 05:40:11 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

using	std::string;
using	std::cout;
using	std::endl;

/*
	Defines some rules
*/
class AbstractEmployee
{
	virtual void	AskForPromotion() = 0;
};

class Employee: AbstractEmployee
{
	private:
		string	Name;
		string	Company;
		int		Age;

	public:
		void	AskForPromotion()
		{
			if (Age > 30)
				cout << "Congrats " << Name << " you got a promotion\n";
			else
				cout << "Sorry " << Name << " you can't be promoted\n";
		}
		void	SetName(string name)
		{
			Name = name;
		}
		string	GetName()
		{
			return (Name);
		}
		void	SetAge(int age)
		{
			if (age >= 18)
				Age = age;
		}
		int		GetAge()
		{
			return (Age);
		}
		void	SetCompany(string company)
		{
			Company = company;
		}
		string	GetCompany()
		{
			return (Company);
		}
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
