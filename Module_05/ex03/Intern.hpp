#ifndef Intern_HPP
# define Intern_HPP

# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"



class Intern
{
	private:
		std::string forms[3];
	public:
		Intern();
		Intern( Intern const & src );
		~Intern();
		
		Intern &	operator=( Intern const & rhs );

		Form*	makeForm(std::string formType, std::string target);
};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ****************************************************** Intern_H */