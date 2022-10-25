#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
# include <iostream>
# include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
		
	public:
		DiamondTrap( void );
		DiamondTrap(std::string name);
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		DiamondTrap &		operator=( DiamondTrap const & rhs );
		
		void	attack(const std::string & target);
		void	whoAmI() const ;
};

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );

#endif 
