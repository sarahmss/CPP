/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:32:10 by coder             #+#    #+#             */
/*   Updated: 2022/10/10 02:53:09 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal( void) ;
		Animal(std::string type);
		Animal( Animal const & src );
		virtual ~Animal();

		Animal &		operator=( Animal const & rhs );

		std::string			getType( void ) const;
		void				setType( std::string type );
		virtual void		makeSound() const;
};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ******************************************************** Animal_H */
