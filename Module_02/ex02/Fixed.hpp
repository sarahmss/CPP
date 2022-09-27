#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:

		Fixed();
		Fixed(const int int_num);
		Fixed(const float float_num);
		Fixed( Fixed const & old_obj );
		~Fixed();

		bool	operator>( Fixed const & obj) const ;
		bool	operator<( Fixed const & obj) const ;
		bool	operator>=( Fixed const & obj) const ;
		bool	operator<=( Fixed const & obj) const ;
		bool	operator==( Fixed const & obj) const ;
		bool	operator!=( Fixed const & obj) const ;

		Fixed &	operator=( Fixed const & obj );
		Fixed	operator+( Fixed const & obj ) const ;
		Fixed	operator-( Fixed const & obj ) const ;
		Fixed	operator*( Fixed const & obj ) const ;
		Fixed	operator/( Fixed const & obj ) const ;

		Fixed &	operator++( void );
		Fixed &	operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );

		static Fixed &			max( Fixed& a, Fixed& b);
		static Fixed &			min( Fixed& a, Fixed& b);
		static Fixed const &	max( Fixed const & a, Fixed const & b);
		static Fixed const &	min( Fixed const & a, Fixed const & b);

		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		float		toFloat( void ) const;
		int			toInt( void ) const;

	private:
		int					value;
		static const int	bits = 8;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & obj );

#endif /* *********************************************************** FIXED_H */
