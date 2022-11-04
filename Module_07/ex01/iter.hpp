/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:09:53 by coder             #+#    #+#             */
/*   Updated: 2022/11/03 00:38:39 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arrayAddress, int lenght, void (function)(T &arrayMember))
{
	for(int i = 0; i < lenght; i++)
		function(arrayAddress[i]);
}

template <typename T>
void iter(T const *arrayAddress, int lenght, void (function)(T const &arrayMember))
{
	for(int i = 0; i < lenght; i++)
		function(arrayAddress[i]);
}

template <typename T>
void	PrintArray(T const &n)
{
	std::cout << "|" << n;
}

template <typename T>
void	changeArray(T &n)
{
	n += 10;
}

#endif //ITER_HPP
