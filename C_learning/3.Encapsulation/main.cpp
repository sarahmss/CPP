/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:01:01 by coder             #+#    #+#             */
/*   Updated: 2022/08/23 05:32:25 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./main.hpp"

int main()
{
	Employee	emp1 = Employee("Carlo", "Fx", 32);

	emp1.IntroduceYourself();
	emp1.SetCompany ("WB");
	emp1.IntroduceYourself();
}
