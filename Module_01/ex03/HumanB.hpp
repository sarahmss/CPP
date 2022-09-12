/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:42:12 by smodesto          #+#    #+#             */
/*   Updated: 2022/09/12 02:48:46 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;	// As long as humanB may not always have a
								// weapon it can not be a ref since it can be
								// inicialized without assigning a value

	public:
		HumanB( std::string HumanName);
		~HumanB( void );
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif
