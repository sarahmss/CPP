#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(): _name("Default Bureaucrat"), _grade(150)
{
	std::cout << "⚖️ ⚙️ Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(int grade, std::string name): _name(name) 
{	
	std::cout << "⚖️ ⚙️ Parametric Bureaucrat constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException(); 
	if (grade > 150)
		throw GradeTooLowException(); 
	else 
		this->_grade = grade;		
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ): _name(src.getName())
{
	std::cout << "✂️📋 Bureaucrat Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "⚖️ 💀 Bureaucrat Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade: " << i.getGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::increment()
{
	if (this->_grade <= 1)
		throw GradeTooHighException();
	else 
		this->_grade--;		
}

void			Bureaucrat::decrement()
{
	if (this->_grade >= 150)
		throw GradeTooLowException();
	else 
		this->_grade++;	
}

char const*	Bureaucrat::GradeTooHighException::what() const throw() {
	return (" Grade Too High ");
}

char const*	Bureaucrat::GradeTooLowException::what() const throw() {
	return (" Grade Too Low ");
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

/* ************************************************************************** */