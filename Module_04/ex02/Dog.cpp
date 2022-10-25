#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "🐶⚙️ Dog Default constructor called" << std::endl;
	this->_brain = new Brain(); 
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
	delete this->_brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
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
void	Dog::makeSound( void ) const
{
	std::cout << "🐶🔊 Au Au V●ᴥ●V" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
void	Dog::setIdea(std::string idea){

	for (int i = 0; i < 100; i++)
		this->_brain->ideas[i] = idea;
}

Brain	&Dog::getIdea(void) const 
{
	return (*this->_brain);
}

/* ************************************************************************** */
