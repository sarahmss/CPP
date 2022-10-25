#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
FragTrap::FragTrap( void ) : ClapTrap("DefaultFragTrap")
{
	std::cout << "🤖💀 FragTrap Default constructor called" << std::endl;

	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "🤖💀 FragTrap Parametric constructor called" << std::endl;

	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap( const FragTrap & rhs )
{
	*this = rhs;
	std::cout << "✂️📋 FragTrap Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "🤖💀 FragTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
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
void	FragTrap::highFivesGuys() const
{
	if (this->getHitPoints() <= 0)
		std::cout	<< "🤖🩺 FragTrap " <<	getName()		<< "have no more hit points and it's dead !!" << std::endl;
	else
		std::cout	<< "🤖✋ FragTrap " <<	this->getName()	<<  " requested high five!" << std::endl;
}

/* ************************************************************************** */
