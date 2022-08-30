/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:01:01 by coder             #+#    #+#             */
/*   Updated: 2022/08/23 05:39:13 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./main.hpp"

int main()
{
	Employee	emp1 = Employee("Carlo", "Fx", 32);
	Employee	emp2 = Employee("Marco", "Fx", 20);

	emp1.AskForPromotion();
	emp2.AskForPromotion();
}
