#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
# include <iostream>
# include <string>

class FragTrap: public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap(std::string name);
		FragTrap( FragTrap const & src );
		~FragTrap();

		FragTrap &		operator=( FragTrap const & rhs );
		void	highFivesGuys() const ;
};

#endif 
