/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:42:12 by smodesto          #+#    #+#             */
/*   Updated: 2022/09/15 02:30:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
# define	DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
# define	INFO "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldnt be asking for more!"
# define	WARNING "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
# define	ERROR "This is unacceptable! I want to speak to the manager now"

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl();
		~Harl();
		void complain( std::string level );
};


#endif
