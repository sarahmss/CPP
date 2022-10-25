/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:32:10 by coder             #+#    #+#             */
/*   Updated: 2022/10/09 22:56:56 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & src );
		WrongAnimal( std::string type );
		~WrongAnimal();

		WrongAnimal &		operator=( WrongAnimal const & rhs );

		std::string	getType( void ) const;
		void		setType( std::string type );
		void		makeSound() const; // add virtual to wrongcat makes wrongcatsoud (override function)
};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i );

#endif /* ******************************************************** WrongAnimal_H */
