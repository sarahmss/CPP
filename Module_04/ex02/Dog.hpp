/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:32:10 by coder             #+#    #+#             */
/*   Updated: 2022/10/21 01:37:00 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain	*_brain;
	public:
		Dog( void );
		Dog( Dog const & src );
		~Dog();

		void	makeSound( void ) const;
		void	setIdea(std::string idea);
		Brain	&getIdea(void) const ;

		Dog &		operator=( Dog const & rhs );
};

#endif /* ******************************************************** DOG_HPP */
