#include "Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert(std::string literal)
{
	_SetType(literal);
	this->_str = literal.c_str();
	for(int i = 0; i < 4; i++)
		this->_valid[i] = true;	
}


Convert::Convert()
{

}

Convert::Convert( const Convert & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Convert::~Convert()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Convert &				Convert::operator=( Convert const & rhs )
{
	if ( this != &rhs )
	{
		this->c_cast = rhs.c_cast;
		this->i_cast = rhs.i_cast;
		this->f_cast = rhs.f_cast;
		this->d_cast = rhs.d_cast;
	}	
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Convert const & i )
{
	std::string	type[4] = {"char: ", "int: ", "float: ", "double: "};
	void (Convert::*function[])(void) const= 
	{
		&Convert::printC,
		&Convert::printI,
		&Convert::printF,
		&Convert::printD
	};
	std::cout << std::fixed << std::setprecision(1);
	for (int T = CHAR; T <= DOUBLE; T++)
	{
		o << type[T]; 
		if (i.getValid(T) == false)
			o << "impossible" << std::endl;	
		else 
			(i.*function[T])();
	}
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Convert::CastingTypes( )
{
	switch (this->_type)
	{
		case  (CHAR):
		{
			this->c_cast = this->_str[0];
			this->i_cast = static_cast<int>(this->c_cast);
			this->f_cast = static_cast<float>(this->c_cast);
			this->d_cast = static_cast<double>(this->c_cast);
			break ;
		}
		case  (INT):
		{
			this->i_cast = atol(this->_str);
			this->c_cast = static_cast<char>(this->i_cast);
			this->f_cast = static_cast<float>(this->i_cast);
			this->d_cast = static_cast<double>(this->i_cast);
			break ;
		}
		case  (FLOAT):
		{
			this->f_cast = atof(this->_str);
			this->c_cast = static_cast<char>(this->f_cast);
			this->i_cast = static_cast<int>(this->f_cast);
			this->d_cast = static_cast<double>(this->f_cast);
			break ;
		}
		case  (DOUBLE):
		{
			this->d_cast = strtod(this->_str, NULL);
			this->c_cast = static_cast<char>(this->d_cast);
			this->f_cast = static_cast<float>(this->d_cast);
			this->i_cast = static_cast<int>(this->d_cast);
			break ;
		}
		default:
		{
			this->_valid[INT] = false;
			this->_valid[CHAR] = false;
			break ;
		}
	}
	_CheckOverflow();
}

void	Convert::_CheckOverflow( void )
{
	if (this->c_cast < 0 || this->c_cast > 127)
		this->_valid[CHAR] = false;
	if (this->i_cast < INT_MIN || this->i_cast > INT_MAX)
		this->_valid[INT] = false;
	if (this->f_cast < -FLT_MAX || this->f_cast > FLT_MAX)
		this->_valid[FLOAT] = false;
	if (this->d_cast < -DBL_MAX || this->d_cast > DBL_MAX)
		this->_valid[DOUBLE] = false;
}

bool	Convert::_isInt(std::string literal) const
{
	for (int i = (literal[0] == '-' ? 0 : 1); literal[i] != '\0' ; i++)
	{
		if (isdigit(literal[i]) == 0)
			return false;
	}
	return (true);
}

bool	Convert::_isFloat(std::string literal) const
{
	bool	dot = false; 
	int		i;

	for (i = (literal[0] == '-' ? 0 : 1); literal[i] != '\0'; i++)
	{
		if ((!isdigit(literal[i]) && literal[i] != '.' && literal[i] != 'f')
			|| (literal[i] == '.' && dot == true)
			|| (literal[i] == 'f' && (literal[i + 1] != '\0' || dot == false)))
			return false;
		if (literal[i] == '.')
			dot = true;
	}
	if (literal[i - 1] == 'f')
		return true;	
	return false;
}

bool	Convert::_isDouble(std::string literal) const
{
	bool	dot = false; 

	for (int i = (literal[0] == '-' ? 0 : 1); literal[i] != '\0'; i++)
	{
		if ((!isdigit(literal[i]) && literal[i] != '.') 
			|| (literal[i] == '.' && dot == true))
			return false;
		if (literal[i] == '.')
			dot = true;
	}	
	return true;
}

bool	Convert::_isChar(std::string literal) const
{
	return (isprint(literal[0]) && literal.length() == 1 && !isdigit(literal[0]));
}

char const*	Convert::invalidType::what() const throw() {
	return (" Invalid scalar type ");
}


void Convert::printC( void ) const
{
	if (this->_valid[CHAR] == true && !isprint(this->c_cast))
		std::cout << " Non displayable" << std::endl;
	else	
		std::cout << '\'' << this->c_cast << '\'' << std::endl;
}
void Convert::printI( void ) const
{
	std::cout << this->i_cast << std::endl;
}

void Convert::printF( void ) const
{
	if (this->_type == PSEUDO_D)
		std::cout << this->_str << "f" << std::endl;
	else if (this->_type == PSEUDO_F)
		std::cout << this->_str << std::endl;
	else
	{
		std::cout << this->f_cast;
		std::cout << "f" << std::endl;
	}
}

void Convert::printD( void ) const
{
	if (this->_type == PSEUDO_D)
		std::cout << this->_str << std::endl;
	else if (this->_type == PSEUDO_F)
	{
		for (int i = 0; this->_str[i + 1] != '\0'; i++)
			std::cout << this->_str[i];
		std::cout << std::endl;
	}
	else 
		std::cout << this->d_cast << std::endl;
}

void	Convert::_SetType(std::string literal)
{
	if (_isChar(literal))
		this->_type = CHAR;
	else if (_isInt(literal))
		this->_type = INT;
	else if (_isFloat(literal))
		this->_type = FLOAT;
	else if (_isDouble(literal)) 
		this->_type = DOUBLE;
	else if (literal == "-inff" || literal == "+inff" || literal == "nanf")
		this->_type = PSEUDO_F;
	else if (literal == "-inf" || literal == "+inf" || literal == "nan")
		this->_type = PSEUDO_D;
	else
		throw Convert::invalidType();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

bool	Convert::getValid( int i ) const
{
	return (this->_valid[i]);
}


/* ************************************************************************** */