/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:35:40 by coder             #+#    #+#             */
/*   Updated: 2022/10/06 02:36:48 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

static void	tests( void )
{
	Fixed	n1(10);
	Fixed	n2(10.0f);
	Fixed	n3(3.25f);
	Fixed	n4(17.75f);

	std::cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ RELATIONAL ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	std::cout << "True tests:" << std::endl;
	std::cout << n1 <<	" > "	<< n3	<< ": " << (n1 > n3) << std::endl;
	std::cout << n1 <<	" < "	<< n4	<< ": " << (n1 < n4) << std::endl;
	std::cout << n1 <<	" >= "	<< n2	<< ": " << (n1 >= n2) << std::endl;
	std::cout << n2 <<	" <= "	<< n1	<< ": " << (n2 <= n1) << std::endl;
	std::cout << n2 <<	" == "	<< n1	<< ": " << (n2 == n1) << std::endl;
	std::cout << n2 << " != "	<< n4	<< ": " << (n2 != n4) << std::endl;

	std::cout << std::endl << "False tests:" << std::endl;
	std::cout << n1 <<	" > "	<< n4	<< ": " << (n1 > n4) << std::endl;
	std::cout << n2 <<	" < "	<< n3	<< ": " << (n2 < n3) << std::endl;
	std::cout << n1 <<	" >= "	<< n4	<< ": " << (n1 >= n4) << std::endl;
	std::cout << n2 <<	" <= "	<< n3	<< ": " << (n2 <= n3) << std::endl;
	std::cout << n2 <<	" == "	<< n4	<< ": " << (n2 == n4) << std::endl;
	std::cout << n2 << " != "	<< n1	<< ": " << (n2 != n1) << std::endl;
	
	std::cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~ BINARY ARITHMETIC ~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	std::cout << " 10 + 3.75 = "	<<	(n1 + n3) << std::endl;
	std::cout << " 10 + 10 = "		<<	(n1 + n2) << std::endl;
	std::cout << " 10 + 17.75 = "	<<	(n1 + n4) << std::endl;
	std::cout << " 10 - 10 = "		<<	(n2 - n1) << std::endl;
	std::cout << " 10 - 3.75 = "	<<	(n2 - n3) << std::endl;
	std::cout << " 10 - 17.75 = "	<<	(n2 - n4) << std::endl;
	std::cout << " 10 * 17.75 = "	<<	(n1 * n4) << std::endl;
	std::cout << " 10 * 3.75 = "	<<	(n1 * n3) << std::endl;
	std::cout << " 10 * 10 = "		<<	(n1 * n2) << std::endl;
	std::cout << " 10 / 3.75 = "	<<	(n2 / n3) << std::endl;
	std::cout << " 10 / 17.75 = "	<<	(n2 / n4) << std::endl;
	std::cout << " 10 / 10 = "		<<	(n2 / n1) << std::endl;

	std::cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ UNARY ARITHMETIC ~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	std::cout << "pre increment: " << n1 << " --> " << ++n1 << std::endl;
	n1 = 10;
	std::cout << "post increment: " << n1 << " --> " << n1++ << std::endl;
	n1 = 10;
	std::cout << "pre decrement: " << n1 << " --> " << --n1 << std::endl;
	n1 = 10;
	std::cout << "post decrement: " << n1 << " --> " << n1-- << std::endl;
	
	std::cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ MAX-MIN ~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	n1 = 10;
	std::cout << "Max between 10 and 3.75: " << Fixed::max(n1, n3) << std::endl;
	std::cout << "Min between 10 and 3.75: " << Fixed::min(n1, n3) << std::endl;
}

static void	subject_tests(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;

	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
}

int main( void )
{
	std::string	mood;

	std::cout << "Execute subject tests? [yes/no] : ";
	std::cin >> mood;
	if (!mood.compare("yes"))
		subject_tests();
	else
		tests();
	return (0);
}
