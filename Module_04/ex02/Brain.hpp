#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		std::string	ideas[100];

		Brain();
		Brain( Brain const & src );
		~Brain();
		
		Brain &		operator=( Brain const & src );
};

std::ostream &			operator<<( std::ostream & o, Brain const & src );

#endif /* *********************************************************** BRAIN_H */