#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include <Form.hpp>

class ShrubberyCreationForm : public Form
{
	private:
		std::string _target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		virtual ~ShrubberyCreationForm();

		std::string	getTarget() const;

		void	execute(Bureaucrat const &executor) const;
		void	beSigned(Bureaucrat const & b1);

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & src );

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */