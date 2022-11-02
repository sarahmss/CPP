/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:33:53 by coder             #+#    #+#             */
/*   Updated: 2022/11/02 01:57:31 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp"

int main(int argc, char const *argv[])
{
	Convert	*C1;

	if (argc != 2)
	{
		std::cout << "Wrong Usage, please insert only [./convert scalarType]\n";
		return 0;
	}	
	try {
		C1 = new Convert(argv[1]); 
		C1->CastingTypes();
		std::cout << *C1;
		delete C1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;	
	}
	return 0;
}
