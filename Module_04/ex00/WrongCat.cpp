#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << "ðąâïļ WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat & rhs )
{
	*this = rhs;
	std::cout << "âïļð WrongCat Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "ðąð WrongCat Destructor called" << std::endl;
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
	std::cout << "ðąð Miau Miau  āļ^âĒïŧâĒ^āļ"  << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
