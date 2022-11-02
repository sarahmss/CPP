#ifndef CONVERT_HPP
# define CONVERT_HPP

# include	<iostream>
# include	<string>
# include	<exception>
# include	<cctype>
# include	<float.h>
# include	<limits.h>
# include	<cstdlib>
#include 	<iomanip>

typedef enum e_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO_F,
	PSEUDO_D
}			t_type;


class Convert
{
	private:
		const char	*_str;
		bool		_valid[4];
		e_type		_type;

		bool		_isChar(std::string literal) const;
		bool		_isInt(std::string literal) const;
		bool		_isFloat(std::string literal) const;
		bool		_isDouble(std::string literal) const;
		void		_CheckOverflow( void );
		void		_SetType(std::string literal);

	public:

		char		c_cast;
		int			i_cast;
		float		f_cast;
		double		d_cast;

		Convert();
		Convert(std::string literal);
		Convert( Convert const & src );
		~Convert();

		Convert &		operator=( Convert const & rhs );

		void		CastingTypes();
		void		printC( void ) const;
		void		printI( void ) const;
		void		printF( void ) const;
		void		printD( void ) const;

		bool		getValid( int i ) const;

		class invalidType : public std::exception 
		{
			public:
				char const* what() const throw();
		};
};

std::ostream &			operator<<( std::ostream & o, Convert const & i );

#endif /* ********************************************************* CONVERT_H */