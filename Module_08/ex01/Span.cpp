/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 03:51:05 by coder             #+#    #+#             */
/*   Updated: 2022/11/06 20:53:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span( void ) : _N(0) { return; }

Span::Span( unsigned int N) : _N(N) , _vector(new std::vector<int>[N]) { return; }


Span::Span( const Span & src ) : _N(src.getN()), _vector(new std::vector<int>[this->_N]) { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span( void ) { delete[] _vector; }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		for (unsigned int i = 0; i < this->_N; i++)
		{
			this->_vector[i] = rhs._vector[i];
		}	
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char* Span::NoSpanException::what() const throw()
{
	return (" No span found ");
}

const char* Span::MaxElementsAchievedException::what() const throw()
{
	return (" Max number of ellements achieved ");
}

void	Span::addNumber(int number)
{
	if ( this->_vector->size() >= this->_N )
		throw Span::MaxElementsAchievedException();
	this->_vector->push_back(number);
}

void		Span::addNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2)
{
	while( it1 != it2 )
	{
		if ( this->_vector->size() >= this->_N )
			throw Span::MaxElementsAchievedException();
		this->_vector->push_back(*it1);
		it1++;
	}
	if ( this->_vector->size() >= this->_N )
		throw Span::MaxElementsAchievedException();
	this->_vector->push_back(*it2);
}

int			Span::shortestSpan( void )
{
	std::vector<int>			v = *this->_vector;
	std::vector<int>::iterator	it;
	int							shortest;
	
	if (this->_N == 0 || this->_vector->size() <= 1)	
		throw Span::NoSpanException();
	
	std::sort(v.begin(), v.end());
	for (it = v.begin(); it < (v.end() -1); it++)
	{
		shortest = (*(it + 1) - *it < shortest ? (*(it + 1) - *it) : shortest);
	}
	return (shortest);
}

int			Span::longestSpan( void )
{
	if (this->_N == 0 || this->_vector->size() <= 1)	
		throw Span::NoSpanException();
	return (*max_element(this->_vector->begin(), this->_vector->end())
			- *min_element(this->_vector->begin(), this->_vector->end()));	
}

void	Span::printSpan()
{
	std::vector<int>::iterator	it;
	
	std::cout << "Span: [ ";
	for (it = this->_vector->begin(); it != this->_vector->end(); it++)
		std::cout << *it << " ";
	std::cout << "]" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
unsigned int		Span::getN( void ) const { return (this->_N); }
/* ************************************************************************** */