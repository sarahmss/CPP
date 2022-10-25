#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("DefaultRobotomyForm", 72, 45), _target("DefaultTarget")
{
//	std::cout << "🤖 ⚙️ Robotomy Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("DefaultRobotomyForm", 72, 45), _target(target)
{
//	std::cout << "🤖 ⚙️ Robotomy Parametric constructor called" << std::endl;
}



RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src.getName(), src.getSignGrade(), src.getExecuteGrade())
{
//	std::cout << "✂️📋 Robotomy Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
//	std::cout << "🤖 💀 Robotomy Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & src )
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

void	RobotomyRequestForm::beSigned(Bureaucrat const & b1)  {
	if (b1.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	else
		this->setSign(true);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	else 
	{
		std::cout << "🔊⛏️ Driling Noises" << std::endl;
		if (rand() % 2 == 0)
			std::cout << "🤖 " << this->_target << " has been successfully robotomized!!" << std::endl;
		else
			std::cout << "❌" << "Robotomization failed" << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

/* ************************************************************************** */