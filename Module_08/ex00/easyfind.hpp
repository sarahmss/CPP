/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:09:53 by coder             #+#    #+#             */
/*   Updated: 2022/11/04 17:44:43 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>
#include <set>

class NoOccurrenceException : public std::exception
{
	public:
		virtual const char* what() const throw();
};

template <typename T>
typename T::iterator easyfind(T &container, int find)
{
	typename T::iterator	firstOccurrence = std::find(container.begin(), container.end(), find);
	if (firstOccurrence == container.end())
		throw NoOccurrenceException();
	return (firstOccurrence);
}

template <typename Container, typename Iterator> void search(Container &container, Iterator &occurrence, int find)
{
	std::cout << "searching " << find << ": ";
	try {
		occurrence = easyfind(container, find);
		std::cout	<< "✔️  Found "		<< *occurrence
					<< " at "		<< std::distance(container.begin(), occurrence)
					<< " position"	<< std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

#endif //EASYFIND_HPP
