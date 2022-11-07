/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 22:44:24 by coder             #+#    #+#             */
/*   Updated: 2022/11/07 03:17:01 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

static void printStack(MutantStack<int, std::deque<int> > mstack)
{
	std::cout << "[ ";
	for (MutantStack<int, std::deque<int> >::iterator it = mstack.begin(); it != mstack.end(); it++)
		std::cout << *(it) << " ";
	std::cout << "]" << std::endl;	
	std::cout << "->Testing if is empty: " << (mstack.empty() ? " mstack is empty" : "mstack isn't empty") << std::endl;
	std::cout << "->Size: " << mstack.size() << "\n->Top element: " << mstack.top() << std::endl;
}

static void printStack(MutantStack<int, std::list<int> > mstack)
{
	std::cout << "[ ";
	for (MutantStack<int, std::list<int> >::iterator it = mstack.begin(); it != mstack.end(); it++)
		std::cout << *(it) << " ";
	std::cout << "]" << std::endl;	
	std::cout << "->Testing if is empty: " << (mstack.empty() ? " mstack is empty" : "mstack isn't empty") << std::endl;
	std::cout << "->Size: " << mstack.size() << "\n->Top element: " << mstack.top() << std::endl;
}

static void printStack(MutantStack<int, std::vector<int> > mstack)
{
	std::cout << "[ ";
	for (MutantStack<int, std::vector<int> >::iterator it = mstack.begin(); it != mstack.end(); it++)
		std::cout << *(it) << " ";
	std::cout << "]" << std::endl;	
	std::cout << "->Testing if is empty: " << (mstack.empty() ? " mstack is empty" : "mstack isn't empty") << std::endl;
	std::cout << "->Size: " << mstack.size() << "\n->Top element: " << mstack.top() << std::endl;
}

int main( void )
{
	std::cout << "---------------------------- Creating deque d_mstack ----------------------------" << std::endl;
	MutantStack<int>	d_mstack;
	MutantStack<int>	d_copymstack;

	
	std::cout << "->Testing if is empty: " << (d_mstack.empty() ? " mstack is empty" : "mstack isn't empty") << std::endl;
	std::cout << "* Pushing 15 numbers to d_mstack: ";
	for (int i = 0; i < 14; i++)
		d_mstack.push(42 + i);
	printStack(d_mstack);	
	std::cout << "* Poping 5 numbers of d_mstack: ";
	for (int i = 0; i < 5; i++)
		d_mstack.pop();
	printStack(d_mstack);
	std::cout << "* Copying d_mstack to d_copymstack: ";
	d_copymstack = d_mstack;
	printStack(d_copymstack);

	std::cout << "---------------------------- Creating list l_mstack ----------------------------" << std::endl;
	MutantStack<int, std::list<int> >	l_mstack;
	MutantStack<int, std::list<int> >	l_copymstack;

	std::cout << "->Testing if is empty: " << (l_mstack.empty() ? " mstack is empty" : "mstack isn't empty") << std::endl;
	std::cout << "* Pushing 15 numbers to l_mstack: ";
	for (int i = 0; i < 14; i++)
		l_mstack.push(42 + i);
	printStack(l_mstack);	
	std::cout << "* Poping 5 numbers of l_mstack: ";
	for (int i = 0; i < 5; i++)
		l_mstack.pop();
	printStack(l_mstack);
	std::cout << "* Copying l_mstack to d_copymstack: ";
	l_copymstack = l_mstack;
	printStack(l_copymstack);	

	std::cout << "---------------------------- Creating vector v_mstack ----------------------------" << std::endl;
	MutantStack<int, std::vector<int> >	v_mstack;
	MutantStack<int, std::vector<int> >	v_copymstack;

	std::cout << "->Testing if is empty: " << (v_mstack.empty() ? " mstack is empty" : "mstack isn't empty") << std::endl;
	std::cout << "* Pushing 15 numbers to v_mstack: ";
	for (int i = 0; i < 14; i++)
		v_mstack.push(42 + i);
	printStack(v_mstack);	
	std::cout << "* Poping 5 numbers of v_mstack: ";
	for (int i = 0; i < 5; i++)
		v_mstack.pop();
	printStack(v_mstack);
	std::cout << "* Copying v_mstack to d_copymstack: ";
	v_copymstack = v_mstack;
	printStack(v_copymstack);
}
