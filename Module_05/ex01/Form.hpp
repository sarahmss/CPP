#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const	_name;
		bool 				_signed;
		int	const			_signGrade;
		int	const			_executeGrade;				

	public:

		Form();
		Form( Form const & src );
		Form(std::string const name, int signgrade, int executegrade);
		~Form();

		class GradeTooHighException : public std::exception  // nested class
		{
			public:
				char const* what() const throw();
		};

		class GradeTooLowException : public std::exception  // nested class
		{
			public:
				char const* what() const throw();   // it means that this function may throw something
		};
		
		std::string	getName() const;
		int			getExecuteGrade() const;
		int			getSignGrade() const;
		bool		getSigned() const;
		void		setSign(bool sign);

		void		beSigned(Bureaucrat const &b1);
		void		signForm(Bureaucrat &b1);

		Form &		operator=( Form const & rhs );
	private:

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */