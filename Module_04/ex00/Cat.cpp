#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "🐱⚙️ Cat Default constructor called" << std::endl;
}

Cat::Cat( const Cat & rhs )
{
	*this = rhs;
	std::cout << "✂️📋 Cat Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "🐱💀 Cat Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
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
void	Cat::makeSound( void ) const
{
	std::cout << "🐱🔊 Miau Miau  ฅ^•ﻌ•^ฅ" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
