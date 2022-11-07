/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 22:44:24 by coder             #+#    #+#             */
/*   Updated: 2022/11/06 20:54:01 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


static void BasicTest( void )
{
	Span	S1(5);
	Span	S2(0);
	
	std::cout << "----------- Trying to acces Span(0) -------" << std::endl;
	try
	{
		S2.addNumber(1);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl ;
	}
	std::cout << "------------ Creating Span(5) -------------" << std::endl;
	for (int i = 0; i < 5; i++)
		S1.addNumber(i + 10);
	S1.printSpan();
	std::cout << "----------- Trying to add one more --------" << std::endl;
	try
	{
		S1.addNumber(16);	
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl ;
	}
	std::cout << "---------------- ShortestSpan -----------" << std::endl;
	try
	{
		std::cout << "Span(5):" << S1.shortestSpan() << std::endl;	
		std::cout << "Span(0):" << S2.shortestSpan() << std::endl;	
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl ;
	}
	std::cout << "---------------- LongestSpan -----------" << std::endl;
	try
	{
		std::cout << "Span(5):" << S1.longestSpan() << std::endl;	
		std::cout << "Span(0):" << S2.longestSpan() << std::endl;	
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl ;
	}	
}

static void ParametricAddNumberTest( void )
{
	Span						S1(20);
	std::vector<int>			vector;
	std::vector<int>::iterator	it1;
	std::vector<int>::iterator	it2;
	
	std::cout << "--------- Testing iterator range addNumber() -------" << std::endl;
	for (int i = 0; i < 20; i++)
		vector.push_back(20 + i);
	it1 = vector.begin();
	it2 = vector.end() - 1;
	S1.addNumber(it1, it2);
	S1.printSpan();
	std::cout << "----------- Trying to add one more --------" << std::endl;
	try
	{
		S1.addNumber(16);	
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl ;
	}
	std::cout << "---------------- ShortestSpan -----------" << std::endl;
	try
	{
		std::cout << "Span(20):" << S1.shortestSpan() << std::endl;	
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl ;
	}
	std::cout << "---------------- LongestSpan -----------" << std::endl;
	try
	{
		std::cout << "Span(20):" << S1.longestSpan() << std::endl;	
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl ;
	}	
}

static void	ComplexTest( void )
{
	Span			S1(20000);
	std::vector<int> vector;
	std::cout << "------- Creating S(100000) ---------" << std::endl;
	for (int i = 0; i < 10000; i++)
		S1.addNumber(i);
	S1.printSpan();
	std::vector<int>::iterator	it1;
	std::vector<int>::iterator	it2;
	std::cout << "--------- Testing iterator range addNumber() to add 10000 more -------" << std::endl;
	for (int i = 0; i < 10000; i++)
		vector.push_back(10000 + i);
	it1 = vector.begin();
	it2 = vector.end() - 1;	
	S1.addNumber(it1, it2);
	std::cout << "---------------- ShortestSpan -----------" << std::endl;
	try
	{
		std::cout << "Span(20000):" << S1.shortestSpan() << std::endl;	
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl ;
	}
	std::cout << "---------------- LongestSpan -----------" << std::endl;
	try
	{
		std::cout << "Span(20000):" << S1.longestSpan() << std::endl;	
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl ;
	}	

}

int main( void )
{
	BasicTest();
	ParametricAddNumberTest();
	ComplexTest();
}
