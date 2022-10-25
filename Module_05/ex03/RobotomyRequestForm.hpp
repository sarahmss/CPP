#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <Form.hpp>
# include <cstdlib>

class RobotomyRequestForm :public Form
{
	private:
		std::string	_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		virtual ~RobotomyRequestForm();

		std::string	getTarget() const;

		void	execute(Bureaucrat const &executor) const;
		void	beSigned(Bureaucrat const & b1);

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & src );

};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */