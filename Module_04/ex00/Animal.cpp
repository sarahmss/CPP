#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal( void ) : _type("Animal")
{
	std::cout << "πΎβοΈ  Animal Default constructor called" << std::endl;
}

Animal::Animal( std::string type ) : _type(type)
{
	std::cout << "πΎβοΈ  Animal Parametric constructor called" << std::endl;
}

Animal::Animal( const Animal & rhs )
{
	*this = rhs;
	std::cout << "βοΈπ Animal Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "πΎπ Animal Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();;
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o	<<	i.getType() << std::endl;
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound() const
{
	std::cout << "πΎπ " << this->_type << " makes animal noises" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Animal::getType( void ) const
{
	return (this->_type);
}

void		Animal::setType( std::string type )
{
	this->_type = type;
}

/* ************************************************************************** */
