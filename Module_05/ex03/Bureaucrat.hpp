#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include	<iostream>
# include	<string>
# include	<exception>
# include 	"Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name; 
		int					_grade; 

	public:
		Bureaucrat();
		Bureaucrat(int grade, std::string name);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		
		Bureaucrat &	operator=( Bureaucrat const & rhs );

		std::string		getName() const;
		int				getGrade() const;
		void			increment();
		void			decrement();

		void			executeForm(Form const & form);

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
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */