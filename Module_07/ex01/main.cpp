/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 22:44:24 by coder             #+#    #+#             */
/*   Updated: 2022/11/03 00:37:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.hpp>


int main( void )
{
	int		I[5] = {1, 2, 3, 4};
	char	C[5] = {'A', 'B', 'C', 'D'};
	float	F[5] = {1.1, 2.2, 3.2, 4.2};	

	std::cout	<< "-------------------- int -------------------- " << std::endl;
	iter(I, 4, PrintArray);
	iter(I, 4, changeArray);
	std::cout << "|          -+10->       ";
	iter(I, 4, PrintArray);
	std::cout	<< "|" << std::endl << "-------------------- char -------------------- " << std::endl;
	iter(C, 4, PrintArray);
	iter(C, 4, changeArray);
	std::cout << "|          -+10->          ";
	iter(C, 4, PrintArray);
	std::cout << "|"	<< std::endl << "-------------------- float -------------------- " << std::endl;
	iter(F, 4, PrintArray);
	iter(F, 4, changeArray);  
	std::cout << "|  -+10-> ";
	iter(F, 4, PrintArray);
	std::cout << "|" << std::endl;
	return 0;
}
