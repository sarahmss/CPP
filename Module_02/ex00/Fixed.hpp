#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & old_obj );
		~Fixed();

		Fixed &		operator=( Fixed const & obj );
		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
	private:
		int					value;
		static const int	bits = 8;

};
#endif /* *********************************************************** FIXED_H */
