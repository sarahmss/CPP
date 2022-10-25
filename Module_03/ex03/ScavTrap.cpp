#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
ScavTrap::ScavTrap( void ) : ClapTrap("DefaultScavTrap")
{
	std::cout << "🤖⚙️ ScavTrap Default constructor called" << std::endl;

	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "🤖⚙️ ScavTrap Parametric constructor called" << std::endl;

	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap( const ScavTrap & rhs )
{
	*this = rhs;
	std::cout << "✂️📋 ScavTrap Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "🤖💀 ScavTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->setName(rhs.getName());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setHitPoints(rhs.getHitPoints());
		this->setAttackDamage(rhs.getAttackDamage());
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::attack(const std::string& target)
{
	if (this->getHitPoints() <= 0)
		std::cout	<<	"🤖🩺 ScavTrap "	<<	this->getName() << "have no more hit points and it's dead!!" << std::endl;
	else if (this->getEnergyPoints() <= 0)
		std::cout	<<	"🤖🔋 ScavTrap "	<<	this->getName() << "have no more energy points and can't attack!!" << std::endl;
	else
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout	<<	"🤖🔫 ScavTrap "	<<	this->getName()
					<<	" attacks "			<<	target
					<<	" causing "			<<	this->getAttackDamage() 
					<<	" points of damage!" << std::endl;		
	}
}

void	ScavTrap::guardGate() const 
{
	if (this->getHitPoints() <= 0)
		std::cout	<<	"🤖🩺 ScavTrap "	<<	this->getName() << "have no more hit points and it's dead!!" << std::endl;
	else 
		std::cout << "🤖🛡️ ScavTrap " << this->getName() << " is now in the Gate Keeper Mode" << std::endl;
}


/* ************************************************************************** */
