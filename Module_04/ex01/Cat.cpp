#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "ðąâïļ Cat Default constructor called" << std::endl;
	this->_brain = new Brain(); 
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
	delete this->_brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->setType(rhs.getType());
		this->_brain = new Brain(*rhs._brain);
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
void	Cat::setIdea(std::string idea){

	for (int i = 0; i < 100; i++)
		this->_brain->ideas[i] = idea;
}

Brain	&Cat::getIdea(void) const 
{
	return (*this->_brain);
}
/* ************************************************************************** */
