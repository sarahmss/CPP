#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Form("DefaultPresidentialForm", 25, 5), _target("DefaultTarget")
{
//	std::cout << "👨‍💼 ⚙️ Presidential Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("DefaultPresidentialForm", 25, 5), _target(target)
{
//	std::cout << "👨‍💼 ⚙️ Presidential Parametric constructor called" << std::endl;
}



PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form(src.getName(), src.getSignGrade(), src.getExecuteGrade())
{
//	std::cout << "✂️📋 Presidential Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
//	std::cout << "👨‍💼 💀 Presidential Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & src )
{
	if ( this != &src )
	{
		this->setSign(src.getSigned());
		this->_target = src.getTarget();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::beSigned(Bureaucrat const & b1)  {
	if (b1.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	else
		this->setSign(true);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	else 
		std::cout << "👨‍💼 " << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

/* ************************************************************************** */