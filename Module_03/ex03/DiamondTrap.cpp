#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
DiamondTrap::DiamondTrap( void ) :	ClapTrap("DefaultDiamondTrap"),
										ScavTrap("DefaultDiamondTrap"),
										FragTrap("DefaultDiamondTrap")
{
	std::cout << "🤖⚙️ DiamondTrap Default constructor called" << std::endl;
	this->_name = "Default";
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
												ScavTrap(name + "_clap_name"),
												FragTrap(name + "_clap_name")
{
	std::cout << "🤖⚙️ DiamondTrap Parametric constructor called" << std::endl;

	this->_name = name;
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap( const DiamondTrap & rhs )
{
	*this = rhs;
	this->_name = rhs._name;
	std::cout << "✂️📋 DiamondTrap Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "🤖💀 DiamondTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		ClapTrap::setName(rhs._name + "_clap_trap");
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setHitPoints(rhs.getHitPoints());
		this->setAttackDamage(rhs.getAttackDamage());
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i )
{
	o	<< "DiamondTrap [🤖 Name = " 			<<	i.getName()	
		<< "] [🔋 Energy Points = "	<<	i.getEnergyPoints()
		<< "] [🩺 Hit Points = "		<<	i.getHitPoints()
		<< "] [🔫 Attack Damage = "	<<	i.getAttackDamage()	<<	"]" << std::endl;
	return (o);
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void	DiamondTrap::attack(const std::string & target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const {
	std::cout << "🤖💎 I am DiamondTrap " << this->_name << " and ClapTrap " << ClapTrap::getName() << std::endl;
}

/* ************************************************************************** */
