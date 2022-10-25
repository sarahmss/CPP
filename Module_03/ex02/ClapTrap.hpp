#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:
	
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		ClapTrap &		operator=( ClapTrap const & rhs );

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	getName( void ) const;
		int			getEnergyPoints( void ) const;
		int			getHitPoints( void ) const;
		int			getAttackDamage( void ) const;
		void		setName( std::string name );
		void		setEnergyPoints( int energypoints );
		void		setHitPoints( int hitpoints );
		void		setAttackDamage( int attackdamage );

		protected:
		std::string	_name;
		int			_energyPoints;
		int			_hitPoints;
		int			_attackDamage;
};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */
