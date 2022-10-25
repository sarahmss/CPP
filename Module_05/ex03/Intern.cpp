#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}


Intern::Intern( const Intern & src )
{
//	std::cout << "✂️📋 Intern Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
//	std::cout << "💀 Intern Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &	Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


Form*	Intern::makeForm(std::string formType, std::string target)
{
	Form	*form = NULL;

	for (int i = 0; formType[i]; i++)
		formType[i] = std::tolower(formType[i]);
	if (formType == "shrubbery creation")
	{
		form = new ShrubberyCreationForm(target);
		std::cout << "Intern creates " << formType << " form " << std::endl;
	}
	else if (formType == "robotomy request")
	{
		form = new RobotomyRequestForm(target);
		std::cout << "Intern creates " << formType << std::endl;
	}
	else if (formType == "presidential pardon")
	{
		form = new PresidentialPardonForm(target);
		std::cout << "Intern creates " << formType << std::endl;
	}
	else
	
	{} 
		std::cout << "Form can't be created since it doesn't exists" << std::endl;
	return (form);
}

/* ************************************************************************** */