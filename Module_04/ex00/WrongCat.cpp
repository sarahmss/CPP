#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << "🐱⚙️ WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat & rhs )
{
	*this = rhs;
	std::cout << "✂️📋 WrongCat Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "🐱💀 WrongCat Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
	{
		this->setType(rhs.getType());
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void	WrongCat::makeSound( void ) const
{
	std::cout << "🐱🔊 Miau Miau  ฅ^•ﻌ•^ฅ"  << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
