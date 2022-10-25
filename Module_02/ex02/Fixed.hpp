#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;

	public:

		Fixed();
		Fixed(const int int_num);
		Fixed(const float float_num);
		Fixed( Fixed const & rhs );
		~Fixed();

		bool	operator>( Fixed const & rhs) const ;
		bool	operator<( Fixed const & rhs) const ;
		bool	operator>=( Fixed const & rhs) const ;
		bool	operator<=( Fixed const & rhs) const ;
		bool	operator==( Fixed const & rhs) const ;
		bool	operator!=( Fixed const & rhs) const ;

		Fixed &	operator=( Fixed const & rhs );
		Fixed	operator+( Fixed const & rhs ) const ;
		Fixed	operator-( Fixed const & rhs ) const ;
		Fixed	operator*( Fixed const & rhs ) const ;
		Fixed	operator/( Fixed const & rhs ) const ;

		Fixed &	operator++( void );
		Fixed &	operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );

		static Fixed &			max( Fixed& n1, Fixed& n2);
		static Fixed &			min( Fixed& n1, Fixed& n2);
		static Fixed const &	max( Fixed const & n1, Fixed const & n2);
		static Fixed const &	min( Fixed const & n1, Fixed const & n2);

		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		float		toFloat( void ) const;
		int			toInt( void ) const;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );

#endif /* *********************************************************** FIXED_H */
