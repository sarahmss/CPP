#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("DefaultShrubberyForm", 145, 137), _target("DefaultTarget")
{
//	std::cout << "🌳 ⚙️ Shrubbery Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("DefaultShrubberyForm", 145, 137), _target(target)
{
//	std::cout << "🌳 ⚙️ Shrubbery Parametric constructor called" << std::endl;
}



ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src.getName(), src.getSignGrade(), src.getExecuteGrade())
{
//	std::cout << "✂️📋 Shrubbery Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
//	std::cout << "🌳 💀 Shrubbery Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & src )
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

void	ShrubberyCreationForm::beSigned(Bureaucrat const & b1)  {
	if (b1.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	else
		this->setSign(true);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	else 
	{
		std::string	file_name = this->_target + "_shrubbery";
		std::ofstream	outFile(file_name.c_str());

		outFile	<<			"		               ,@@@@@@@,\n"
				<<			"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
				<<			"    ,&/%/%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
				<<			"   ,%&/%&&%&&%,@@@/@@@/@@@88\\88888/88'\n"
				<<			"   %&&%&%&/%&&%@@/@@/ /@@@88888\\88888'\n"
				<<			"   %&&%/ %&/%/%&&@@/ V /@@' `88\\8 `/88'\n"
				<<			"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
				<<			"       |o|        | |         | |\n"
				<<			"       |.|        | |         | |\n"
				<<			"jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
		outFile.close();	
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

/* ************************************************************************** */