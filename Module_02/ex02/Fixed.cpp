#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
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
	@brief: converts int_num to the corresponding fixed-point value
*/
Fixed::Fixed(const int int_num)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = int_num << this->bits;
}

/*
	@brief: converts float_num to the corresponding fixed-point value
*/
Fixed::Fixed(const float float_num)
{
	std::cout << "Float constructor called" << std::endl;

	this->value = roundf(float_num * (1 << this->bits));
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

std::ostream &			operator<<( std::ostream & o, Fixed const & obj )
{
	o << obj.toFloat();
	return o;
}


bool	operator>( Fixed const & obj) const
{

}
bool	operator<( Fixed const & obj) const
{

}
bool	operator>=( Fixed const & obj) const
{

}
bool	operator<=( Fixed const & obj) const
{

}
bool	operator==( Fixed const & obj) const
{

}
bool	operator!=( Fixed const & obj) const
{

}

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

Fixed	operator+( Fixed const & obj ) const
{

}
Fixed	operator-( Fixed const & obj ) const
{

}
Fixed	operator*( Fixed const & obj ) const
{

}
Fixed	operator/( Fixed const & obj ) const
{

}

Fixed &	operator++( void )
{

}

Fixed &	operator--( void )
{

}

Fixed	operator++( int )
{

}

Fixed	operator--( int )
{

}



static Fixed &			max( Fixed& a, Fixed& b)
{

}

static Fixed &			min( Fixed& a, Fixed& b)
{

}

static Fixed const &	max( Fixed const & a, Fixed const & b)
{

}

static Fixed const &	min( Fixed const & a, Fixed const & b)
{

}


/*
** --------------------------------- METHODS ----------------------------------
*/

/*
	@brief: Converts the fixed-point value to a floating-point value
*/
float		Fixed::toFloat( void ) const
{
	return ((float)this->value / (1 << this->bits));
}


/*
	@brief: converts the fixed-point value to an integer value.
*/
int			Fixed::toInt( void ) const
{
	return (this->value >> this->bits);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
int			Fixed::getRawBits( void ) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void		Fixed::setRawBits( int const raw )
{
	this->value = raw;
}
/* ************************************************************************** */
