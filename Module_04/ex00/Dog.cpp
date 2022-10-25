#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "🐶⚙️ Dog Default constructor called" << std::endl;
}

Dog::Dog( const Dog & rhs )
{
	*this = rhs;
	std::cout << "✂️📋 Dog Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "🐶💀 Dog Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
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
void	Dog::makeSound( void ) const
{
	std::cout << "🐶🔊 Au Au V●ᴥ●V" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
