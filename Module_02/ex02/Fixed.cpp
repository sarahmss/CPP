#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/

Fixed::Fixed()						// Default
{
	this->_value = 0;
}

Fixed::Fixed( const Fixed & rhs )	// Copy
{
	*this = rhs;
}

Fixed::Fixed(const int int_num)		// Parametric
{
	this->_value = int_num << this->_bits;
}

Fixed::Fixed(const float float_num)	// Parametric
{
	this->_value = roundf(float_num * (1 << this->_bits));
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &			operator<<( std::ostream & o, Fixed const & obj )
{
	o << obj.toFloat();
	return o;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ RELATIONAL ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 

bool	Fixed::operator>( Fixed const & rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<( Fixed const & rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=( Fixed const & rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=( Fixed const & rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==( Fixed const & rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const & rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ASSIGNMENT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 

Fixed &				Fixed::operator=( Fixed const & rhs )	// Assignment (replaces content of rhs)
{
	if ( this != &rhs )
	{
		this->_value = rhs.getRawBits();
	}
	return (*this);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ARITHMETIC ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 

Fixed	Fixed::operator+( Fixed const & rhs ) const
{
	Fixed	plus;

	plus.setRawBits(this->getRawBits() +  rhs.getRawBits());
	return (plus);
}

Fixed	Fixed::operator-( Fixed const & rhs ) const
{
	Fixed	minus;

	minus.setRawBits(this->getRawBits() -  rhs.getRawBits());
	return (minus);
}

Fixed	Fixed::operator*( Fixed const & rhs ) const
{
	Fixed	mult;

	mult.setRawBits((this->getRawBits() *  rhs.getRawBits()) >> this->_bits);
	return (mult);
}

Fixed	Fixed::operator/( Fixed const & rhs ) const
{
	Fixed	div((this->toFloat() /  rhs.toFloat()));
	return (div);
}

Fixed &	Fixed::operator++( void )	// pre-increment
{
	this->_value++;
	return (*this);
}

Fixed &	Fixed::operator--( void )	// pre-decrement
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++( int )	// post-increment
{
	Fixed	temp(*this);	// save the current value

	this->_value++;
	return (temp);			// return the saved state
}

Fixed	Fixed::operator--( int )	// post-decrement
{
	Fixed	temp(*this);	// save the current value

	this->_value--;
	return (temp);			// return the saved state
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

Fixed &	Fixed::max( Fixed& n1, Fixed& n2) {
	return (n1.getRawBits() > n2.getRawBits() ? n1 : n2);
}

Fixed &	Fixed::min( Fixed& n1, Fixed& n2) {
	return (n1.getRawBits() < n2.getRawBits() ? n1 : n2);
}

Fixed const &	Fixed::max( Fixed const & n1, Fixed const & n2) {
	return (n1.getRawBits() > n2.getRawBits() ? n1 : n2);
}

Fixed const &	Fixed::min( Fixed const & n1, Fixed const & n2) {
	return (n1.getRawBits() < n2.getRawBits() ? n1 : n2);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
int			Fixed::getRawBits( void ) const
{
	return (this->_value);
}

void		Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}
/* ************************************************************************** */
