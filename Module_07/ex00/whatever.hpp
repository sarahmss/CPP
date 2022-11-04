/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:09:53 by coder             #+#    #+#             */
/*   Updated: 2022/11/03 00:38:54 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &arg1, T &arg2)
{
	T temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}

template <typename T>
T  const &min(T &arg1, T &arg2)
{
	return ((arg2 <= arg1) ? arg2: arg1);	
}

template <typename T>
T  const &max(T &arg1, T &arg2)
{
	return ((arg2 >= arg1) ? arg2: arg1);		
}

template <typename T>
void prePrint(T &arg1, T &arg2, std::string n1, std::string n2)
{
	std::cout << "| "<< n1 << " = " << arg1 << " | " << n2 << " = " << arg2 << " | "; 
}

template <typename T>
void posPrint(T &arg1, T &arg2, std::string n1, std::string n2)
{
	std::cout << "🔀 | " << n1 << " = " << arg1 << " | " << n2 << " = " << arg2 << " |" << std::endl; 
}
#endif //WHATEVER_HPP
