#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		ScavTrap &		operator=( ScavTrap const & rhs );
		void	attack(std::string const & target) ;
		void	guardGate() const ;
};

#endif 
