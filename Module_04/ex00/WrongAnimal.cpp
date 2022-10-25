/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:42:52 by coder             #+#    #+#             */
/*   Updated: 2022/10/21 19:46:00 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal(void)
{
	std::cout << "🐾⚙️ WrongAnimal Default constructor called" << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal & rhs )
{
	*this = rhs;
	std::cout << "✂️📋 WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
	std::cout << "🐾⚙️  WrongAnimal Parametric constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "🐾💀 WrongAnimal Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();;
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
{
	o	<< i.getType() << std::endl;
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongAnimal::makeSound() const
{
	std::cout << "🔊❌ makes Wronganimal noises" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	WrongAnimal::getType( void ) const
{
	return (this->_type);
}

void		WrongAnimal::setType( std::string type )
{
	this->_type = type;
}

/* ************************************************************************** */
