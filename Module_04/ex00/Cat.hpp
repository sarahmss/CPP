/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:32:10 by coder             #+#    #+#             */
/*   Updated: 2022/10/21 22:37:31 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( Cat const & src );
		virtual ~Cat();

		void	makeSound( void ) const;

		Cat &		operator=( Cat const & rhs );
};

#endif /* ******************************************************** Cat_HPP */
