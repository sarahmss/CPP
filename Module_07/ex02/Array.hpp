/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:09:53 by coder             #+#    #+#             */
/*   Updated: 2022/11/03 21:37:34 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template <typename T>
class Array 
{
	private:
		unsigned int	_n;
		T				*_element;

	public:
		Array( void ): _n(0), _element(0){ return; };
		Array( unsigned int n ): _n(n), _element(new T[n]()){ return; };
		Array ( Array const &rhs ): _n(rhs.size()), _element(new T[this->_n]()){ *this = rhs; };
		~Array( void ){
			if (this->_element)
				delete[] this->_element;
		}
		
		T &operator[](unsigned int i) const
		{
			if ((i < 0) || (i >= this->_n))
				throw InaccessibleMemoryException();
			return (_element[i]);
		};

		Array &operator=(Array const &rhs)
		{
			try
			{
				for (unsigned int i = 0; i < rhs.size(); i++)
				{
					if (i >= this->_n)
						throw InaccessibleMemoryException();
					this->_element[i] = rhs._element[i];
				}
				
			}
			catch (const std::exception& e)
			{
				std::cout << e.what() << std::endl;
			}
			return (*this);
		};

		class InaccessibleMemoryException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return (" Inaccessible Memory ");
				}
		}; 
		
		unsigned int	size() const {
		return this->_n;
	}
};

#endif //ARRAY_HPP
