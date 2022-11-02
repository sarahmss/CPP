/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:54:05 by coder             #+#    #+#             */
/*   Updated: 2022/11/02 22:18:21 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "realtype.hpp"

class Base {public: virtual ~Base( void ){}};

class A : public Base { };
class B : public Base { };
class C : public Base { };

Base * generate(void)
{
	int i = rand() % 3;
	if (i == 1)
	{
		std::cout << "|    A     |";
		return(new A);
	}
	if (i == 2)
	{
		std::cout << "|    B     |";
		return(new B);
	}
	std::cout << "|    C     |";
	return(new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "    ✔️A   | ";
	else if (dynamic_cast<B*>(p))
		std::cout << "    ✔️B   | ";
	else if (dynamic_cast<C*>(p))
		std::cout << "    ✔️C   | ";
}

void identify(Base& p)
{
	try {
		A &a = dynamic_cast<A&>(p);
		std::cout << "✔️A";
		(void)a;
	} catch(std::exception& e) {
		std::cout << "❌A";
	}
	try {
		B &b = dynamic_cast<B&>(p);
		std::cout << "✔️B";
		(void)b;
	} catch(std::exception& e) {
		std::cout << "❌B";
	}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "✔️C";
		(void)c;
	} catch(std::exception& e) {
		std::cout << "❌C";
	}
}


int main( void )
{
	Base *randomClass;
	
	std::cout << "| N | Instance | Pointer | Reference |" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout <<  "| " << i << " ";
		randomClass = generate();	
		identify(randomClass);
		Base &refClass = *randomClass;
		identify(refClass);	
		std::cout << "  |" << std::endl;
		delete randomClass;	
	}
}
