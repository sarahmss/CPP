/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 22:44:24 by coder             #+#    #+#             */
/*   Updated: 2022/11/04 17:45:04 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char* NoOccurrenceException::what() const throw()
{
	return (" ❌ No matching occurrence ");
}

static void VectorTest( void )
{
	std::vector<int>			Vector;
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	occurrence;
	
	for (int i = 0; i < 5; i++)
		Vector.push_back(i + 10);
	std::cout << "Vector: [ ";
	for (it = Vector.begin(); it != Vector.end(); it++)
		std::cout << *it << " ";
	std::cout << "]" << std::endl;
	search(Vector, occurrence, 14);
	search(Vector, occurrence, 20);	
}

static void DequeTest( void )
{
	std::deque<int>				deque;
	std::deque<int>::iterator	it;
	std::deque<int>::iterator	occurrence;
	
	for (int i = 0; i < 5; i++)
		deque.push_front(i + 10);
	std::cout << "deque: [ ";
	for (it = deque.begin(); it != deque.end(); it++)
		std::cout << *it << " ";
	std::cout << "]" << std::endl;
	search(deque, occurrence, 14);
	search(deque, occurrence, 20);	
}
static void SetTest( void )
{
	std::set<int>			set;
	std::set<int>::iterator	it;
	std::set<int>::iterator	occurrence;
	
	for (int i = 0; i < 5; i++)
		set.insert(i + 10);
	std::cout << "set: [ ";
	for (it = set.begin(); it != set.end(); it++)
		std::cout << *it << " ";
	std::cout << "]" << std::endl;
	search(set, occurrence, 14);
	search(set, occurrence, 20);	
}

static void ListTest( void )
{
	std::list<int>				list;
	std::list<int>::iterator	it;
	std::list<int>::iterator	occurrence;
	
	for (int i = 0; i < 5; i++)
		list.push_front(i + 10);
	std::cout << "list: [ ";
	for (it = list.begin(); it != list.end(); it++)
		std::cout << *it << " ";
	std::cout << "]" << std::endl;
	search(list, occurrence, 14);
	search(list, occurrence, 20);	
}

int main( void )
{
	std::cout << "---------- Testing vector -----------" << std::endl;
	VectorTest();
	std::cout << "---------- Testing List -----------" << std::endl;
	ListTest();
	std::cout << "---------- Testing Set -----------" << std::endl;
	SetTest();
	std::cout << "---------- Testing Deque -----------" << std::endl;
	DequeTest();
}
