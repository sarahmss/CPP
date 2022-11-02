#ifndef CONVERT_HPP
# define CONVERT_HPP

# include	<iostream>
# include	<string>
# include	<exception>
# include	<cctype>
# include	<float.h>
# include	<limits.h>
# include	<cstdlib>
# include 	<iomanip>
# define D_MAX_STR "179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0"
# define D_MIN_STR "-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0"
# define F_MAX_STR "340282346638528859811704183484516925440.0f"
# define F_MIN_STR "-340282346638528859811704183484516925440.0000000000000000f"

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
		bool		_isFloat(std::string literal);
		bool		_isDouble(std::string literal);
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
		class Overflow : public std::exception 
		{
			public:
				char const* what() const throw();
		};
};

std::ostream &			operator<<( std::ostream & o, Convert const & i );

#endif /* ********************************************************* CONVERT_H */