#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "ðąâïļ Cat Default constructor called" << std::endl;
}

Cat::Cat( const Cat & rhs )
{
	*this = rhs;
	std::cout << "âïļð Cat Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "ðąð Cat Destructor called" << std::endl;
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
	std::cout << "ðąð Miau Miau  āļ^âĒïŧâĒ^āļ" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
