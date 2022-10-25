#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form():	_name("DefaultFormsName"),
				_signed(false),
				_signGrade(150),
				_executeGrade(150)
{
	std::cout << "📝 ⚙️ Forms Default constructor called" << std::endl;
}

Form::Form(std::string const name, int signgrade, int executegrade): _name(name),
																	_signed(false),
																	_signGrade(signgrade),
																	_executeGrade(executegrade)
{
	std::cout << "📝 ⚙️ Forms Parametric constructor called" << std::endl;
	if (signgrade < 1 || executegrade < 1)
		throw GradeTooHighException();
	if (signgrade > 150 || executegrade > 150)
		throw GradeTooLowException();
}

Form::Form( const Form & src ):	_name(src.getName()),
								_signGrade(src.getSignGrade()),
								_executeGrade(src.getExecuteGrade())
{
	std::cout << "✂️📋 Forms Copy constructor called" << std::endl;
	*this = src;
}

Form::~Form()
{
	std::cout << "📝 💀 Form Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &	Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs.getSigned();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o	<< i.getName()
		<< ", Form Sign: " << i.getSigned()
		<< ", ExecuteGrade: " << i.getExecuteGrade()
		<< ", SignGrade: " << i.getSignGrade()
		<< std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

char const*	Form::GradeTooHighException::what() const throw() {
	return (" Grade Too High ");
}

char const*	Form::GradeTooLowException::what() const throw() {
	return (" Grade Too Low ");
}


void	Form::beSigned(Bureaucrat const &b1)
{
	if (b1.getGrade() > this->_signGrade)
		throw GradeTooLowException();
	else
		this->_signed = true;
}

void	Form::signForm(Bureaucrat &b1)
{
	if (this->_signed == true)
		std::cout << b1.getName() << " signed " << this->_name << std::endl; 
	else 
		std::cout	<< b1.getName()		<< " couldn’t sign "
					<< this->_name		<< " because "
					<< b1.getGrade() 	<< " it is a lower grade than "
					<< this->_signGrade << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Form::getName() const
{
	return this->_name;
}

int	Form::getExecuteGrade() const
{
	return this->_executeGrade;
}

int	Form::getSignGrade() const
{
	return this->_signGrade;
}

bool	Form::getSigned() const
{
	return this->_signed;
}

void	Form::setSign(bool sign) 
{
	this->_signed = sign;
}