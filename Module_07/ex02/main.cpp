/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 22:44:24 by coder             #+#    #+#             */
/*   Updated: 2022/11/03 21:34:08 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750

int IntraTests()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;

}

int main( void )
{
	Array<int>		I1(5);
	Array<int>		I2(5);
	Array<char>		C1(5);
	Array<float>	F1(5);

	std::cout << "--------------- Intra Tests ------------------" << std::endl;
	IntraTests();

	std::cout << "--------------- Int Array ------------------" << std::endl;
	for(int i = 0; i < 5; i++)
		I1[i] = i + 10;
	std::cout << "Using []: ";
	for (unsigned int i = 0; i < 5; i++)
	{
		if (i == (I1.size() - 1))
			std::cout << std::endl;
		else if (i != (I1.size() - 1))
			std::cout << I1[i] << ", ";	
	}
	std::cout << "Checking non-alocated memory (size = " << I1.size() << "): ";
	try {
		I1[I1.size() + 10] = 75;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;		
	}
	std::cout << "Copying Array: I2[] = ";
	I2 = I1;
	for (unsigned int i = 0; i < 5; i++)
	{
		if (i == (I2.size() - 1))
			std::cout << std::endl;
		else if (i != (I2.size() - 1))
			std::cout << I2[i] << ", ";	
	}
	std::cout << "Checking Independence: I2[1] = " << I2[1]  << " I1[1] = " << I1[1] << std::endl;
	I2[1] = 15; 
	std::cout  << "After changing it: I2[1] = " << I2[1]  << " I1[1] = " << I1[1] << std::endl;
	std::cout << "--------------- Char Array ------------------" << std::endl;
	for(int i = 0; i < 5; i++)
		C1[i] = i + 'a';
	std::cout << "Using []: ";
	for (unsigned int i = 0; i < 5; i++)
	{
		if (i == (C1.size() - 1))
			std::cout << std::endl;
		else if (i != (C1.size() - 1))
			std::cout << C1[i] << ", ";	
	}
	std::cout << "Checking non-alocated memory (size = " << C1.size() << "): ";
	try {
		C1[C1.size() + 10] = 'c';
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;		
	}
	std::cout << "--------------- Float Array ------------------" << std::endl;
	for(int i = 0; i < 5; i++)
		F1[i] = i + 10.5;
	std::cout << "Using []: ";
	for (unsigned int i = 0; i < 5; i++)
	{
		if (i == (F1.size() - 1))
			std::cout << std::endl;
		else if (i != (F1.size() - 1))
			std::cout << F1[i] << ", ";	
	}
	std::cout << "Checking non-alocated memory (size = " << F1.size() << "): ";
	try {
		F1[F1.size() + 10] = 75;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;		
	}

}
