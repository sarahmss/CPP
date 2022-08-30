/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:13:41 by smodesto          #+#    #+#             */
/*   Updated: 2022/08/23 06:05:52 by smodesto         ###   ########.fr       */
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
		int		Age;
	protected:
		string	Company;
	public:
		void	Work()
		{
			cout << Name << "is checking email, tasks and baklog\n";
		}
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

class Developer: public Employee
{
	public:
		string	FavProgLang;
		Developer(string name, string company, int age, string favproglang)
			:Employee(name, company, age)
		{
			FavProgLang = favproglang;
		}
		void	FixBug()
		{
			cout << GetName() << "fixed bugs using " << FavProgLang << endl;
		}
};

class Teacher: public Employee
{
	public:
		string	Subject;
		void	PrepareLesson()
		{
			cout << GetName() << " is preparing " << Subject << "lesson\n";
		}
		Teacher (string name, string company, int age, string subject)
		:Employee(name, company, age)
		{
			Subject = subject;
		}
};
#endif
