#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

/*
	@brief: Copy constructor is used to initialize the members of a newly
			created object by copying the members of an already existing object.
	@old_obj: a reference to an object of the same class as an argument.
*/
Fixed::Fixed( const Fixed & old_obj )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = old_obj;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
	assignment operator replaces the contents of existing objects.
*/
Fixed &				Fixed::operator=( Fixed const & obj )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &obj )
	{
		this->value = obj.getRawBits();
	}
	return (*this);
}


/*
** --------------------------------- ACCESSORS ----------------------------------
*/

int			Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void		Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

/* ************************************************************************** */
