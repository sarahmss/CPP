/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:32:10 by coder             #+#    #+#             */
/*   Updated: 2022/10/10 02:42:08 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog( void );
		Dog( Dog const & src );
		~Dog();

		void	makeSound( void ) const;

		Dog &		operator=( Dog const & rhs );
};

#endif /* ******************************************************** DOG_HPP */
