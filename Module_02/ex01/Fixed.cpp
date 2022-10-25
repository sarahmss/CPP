#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/

Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & old_obj )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = old_obj;
}

/*
	@brief: converts int_num to the corresponding fixed-point _value
		as long as a fixed-point number is represented like IIIIIII.FFFFFFF
		we shift left the int number
			ex: 5	==	0000000000000101
			5 << 8	==	0000010100000000
*/
Fixed::Fixed(const int int_num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = int_num << this->_bits;
}

/*
	@brief: converts float_num to the corresponding fixed-point _value
		ex: 1	==	0000000000000001 => 1 << 8 == 00000000100000000
*/
Fixed::Fixed(const float float_num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(float_num * (1 << this->_bits));
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
		this->_value = obj.getRawBits();
	}
	return (*this);
}


std::ostream &			operator<<( std::ostream & o, Fixed const & obj )
{
	o << obj.toFloat();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
	@brief: Converts the fixed-point _value to a floating-point _value
*/
float		Fixed::toFloat( void ) const
{
	return ((float)this->_value / (1 << this->_bits));
}


/*
	@brief: converts the fixed-point _value to an integer _value.
*/
int			Fixed::toInt( void ) const
{
	return (this->_value >> this->_bits);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
int			Fixed::getRawBits( void ) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void		Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}
/* ************************************************************************** */
