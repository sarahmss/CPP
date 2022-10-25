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

		Fixed &		operator=( Fixed const & obj );
		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		float		toFloat( void ) const;
		int			toInt( void ) const;

	private:
		int					_value;
		static const int	_bits = 8;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & obj );

#endif /* *********************************************************** FIXED_H */
