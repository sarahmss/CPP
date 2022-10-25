/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:32:10 by coder             #+#    #+#             */
/*   Updated: 2022/10/21 02:06:28 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"


class Cat : public Animal
{
	private:
		Brain	*_brain;
	public:
		Cat( void );
		Cat( Cat const & src );
		~Cat();

		void	makeSound( void ) const;
		
		void	setIdea(std::string idea);
		Brain	&getIdea(void) const ;
		
		Cat &		operator=( Cat const & rhs );
};

#endif /* ******************************************************** Cat_HPP */
