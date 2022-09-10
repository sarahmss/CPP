/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:01:01 by coder             #+#    #+#             */
/*   Updated: 2022/08/23 06:01:33 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./main.hpp"

int main()
{
	Developer	dev1 = Developer("Gab", "YT", 33, "C++");
	Teacher	tech1 = Teacher("mommy", "maria", 25, "Portuguese");

	dev1.FixBug();
	dev1.AskForPromotion(); // make parent class public to use it
	tech1.PrepareLesson();
	tech1.AskForPromotion(); // make parent class public to use it
}
