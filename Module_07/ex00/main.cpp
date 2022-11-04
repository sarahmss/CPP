/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 22:44:24 by coder             #+#    #+#             */
/*   Updated: 2022/11/03 00:37:03 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <whatever.hpp>

static void subjectTest()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return ;
}

int main( void )
{
	int		I1 = 420;	int		I2 = -420;
	float	F1 = 4.2f;	float	F2 = -4.2f;
	double	D1 = 4.2;	double	D2 =  -4.2;
	char	C1 = '4';	char	C2 = '2' ;

	std::cout	<< "----------------------- Subject Tests----------------------- " << std::endl;
	subjectTest();
	std::cout	<< "----------------------- Swap ----------------------- " << std::endl;
	prePrint<int>(I1, I2, "I1", "I2");
	swap<int>(I1, I2);
	posPrint<int>(I1, I2, "I1", "I2");
	prePrint<float>(F1, F2, "F1", "F2");
	swap<float>(F1, F2);
	posPrint<float>(F1, F2, "F1", "F2");
	prePrint<double>(D1, D2, "D1", "D2");
	swap<double>(D1, D2);
	posPrint<double>(D1, D2, "D1", "D2");
	prePrint<char>(C1, C2, "C1", "C2");
	swap<char>(C1, C2);
	posPrint<char>(C1, C2, "C1", "C2");
	std::cout	<< "----------------------- max ----------------------- " << std::endl;
	prePrint<int>(I1, I2, "I1", "I2");
	std::cout << "return : " << max<int>(I1, I2)  << "|" << std::endl;
	prePrint<float>(F1, F2, "F1", "F2");
	std::cout << "return : " << max<float>(F1, F2)	<< "|" << std::endl;
	prePrint<double>(D1, D2, "D1", "D2");
	std::cout << "return : " << max<double>(D1, D2)  << "|" << std::endl;
	prePrint<char>(C1, C2, "C1", "C2");
	std::cout << "return : " << max<char>(C1, C2)  << "|" << std::endl;
	std::cout	<< "----------------------- min ----------------------- " << std::endl;
	prePrint<int>(I1, I2, "I1", "I2");
	std::cout << "return : " << min<int>(I1, I2)  << "|" << std::endl;
	prePrint<float>(F1, F2, "F1", "F2");
	std::cout << "return : " << min<float>(F1, F2)<< "|" << std::endl;
	prePrint<double>(D1, D2, "D1", "D2");
	std::cout << "return : " << min<double>(D1, D2)  << "|" << std::endl;
	prePrint<char>(C1, C2, "C1", "C2");
	std::cout << "return : " << min<char>(C1, C2)  << "|" << std::endl;
	return 0;
}
