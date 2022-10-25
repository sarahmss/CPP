#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "⚙️ 🧠 Brain default constructor called" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "✂️📋🧠  Brain copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "🧠💀 Brain destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & src )
{
	if ( this != &src )
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & src )
{
	for (int i = 0; i < 100; i++)
	{
		o <<  i << " " << src.ideas[i];
		if (i < 99)
			o << ", ";
	}
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */