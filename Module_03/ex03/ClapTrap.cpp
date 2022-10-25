#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap(void):	_name("DefaultClapTrap"),
							_energyPoints(10),
							_hitPoints(10),
							_attackDamage(0) 

{
	std::cout << "🤖⚙️ ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) :	_name(name),
											_energyPoints(10),
											_hitPoints(10),
											_attackDamage(0) 
{
	std::cout << "🤖⚙️ ClapTrap Parametric constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & rhs )
{
	*this = rhs;
	std::cout << "✂️📋 ClapTrap Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "🤖💀 ClapTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_hitPoints = rhs.getHitPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	o	<< "[🤖 Name = " 			<<	i.getName()	
		<< "] [🔋 Energy Points = "	<<	i.getEnergyPoints()
		<< "] [🩺 Hit Points = "		<<	i.getHitPoints()
		<< "] [🔫 Attack Damage = "	<<	i.getAttackDamage()	<<	"]" << std::endl;
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
		std::cout	<<	"🤖🩺 "	<<	getName() << "have no more hit points and it's dead !! "  << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout	<<	"🤖🔋 "	<<	getName() << "have no more energy points and can't attack!!" << std::endl;
	else
	{
		this->_energyPoints -= 1;
		std::cout	<<	"🤖🔫 "					<<	getName()
					<<	" attacks "				<<	target
					<<	" causing "				<<	getAttackDamage() 
					<<	" points of damage!"	<< std::endl;
	}

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < (int)amount)
		std::cout	<<	"🤖🔫 "	<<	getName() << " take a damage of " << amount << " and have no more hit points (it's dead)!!"  << std::endl;
	else
	{
		std::cout	<<	"🤖💉 "	<<	getName()
					<<	" suffered a damage of "	<<	amount
					<<	" staying only with "		<<	(int)(getHitPoints() - amount)				
					<<	" hit points!"				<<	std::endl;
	}
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		std::cout	<<	"🤖🩺 "	<<	getName() << "have no more hit points and it's dead !!" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout	<<	"🤖🔋 "	<<	getName() << "have no more energy points and can't repair itself!!" << std::endl;
	else 
	{
		this->_energyPoints -= 1;
	this->_hitPoints += amount;
	std::cout	<<	"🤖🩺 "					<<	getName()
				<<	" repairs itself getting "	<<	amount
				<<	" hit points back!"			<<	std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	ClapTrap::getName( void ) const
{
	return (this->_name);
}
int			ClapTrap::getEnergyPoints( void ) const
{
	return (this->_energyPoints);
}
int			ClapTrap::getHitPoints( void ) const
{
	return (this->_hitPoints);
}
int			ClapTrap::getAttackDamage( void ) const
{
	return (this->_attackDamage);
}

void		ClapTrap::setName( std::string name )
{
	this->_name = name;
}
void		ClapTrap::setEnergyPoints( int energypoints )
{
	this->_energyPoints = energypoints;
}
void		ClapTrap::setHitPoints( int hitpoints )
{
	this->_hitPoints = hitpoints;
}
void		ClapTrap::setAttackDamage( int attackdamage )
{
	this->_attackDamage = attackdamage;
}

/* ************************************************************************** */
