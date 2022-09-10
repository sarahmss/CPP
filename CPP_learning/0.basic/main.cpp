/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:01:01 by coder             #+#    #+#             */
/*   Updated: 2022/08/23 04:54:03 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./main.hpp"

int main()
{
	Employee	emp1 = Employee("Carlo", "Fx", 32);
	Employee	emp2 = Employee("Marco", "WB", 58);

	emp1.IntroduceYourself();
	emp2.IntroduceYourself();
}
