/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:42:12 by smodesto          #+#    #+#             */
/*   Updated: 2022/09/12 02:46:21 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon		&weapon;	// To humanA weapon must be a reference since
								// it will always be armed

	public:
		HumanA( std::string HumanName, Weapon &WeaponType);
		~HumanA( void );
		void	attack( void );
};

#endif
