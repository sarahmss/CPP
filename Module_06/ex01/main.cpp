/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:25:22 by coder             #+#    #+#             */
/*   Updated: 2022/11/02 20:44:18 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

static Data *initData( void )
{
	Data	*human = new Data();

	human->name = "Clara";
	human->age = "15";
	human->job = "Dreamer";

	return (human);
}

int main( void )
{
	Data		*human = initData();
	
	std::cout	<< "-------- Default Human --------"	<< std::endl
				<< "Name: " << human->name				<< std::endl
				<< "Age: "	<< human->age				<< std::endl
				<< "Job: "	<< human->job				<< std::endl;

	uintptr_t	serializedHuman = serialize(human);
	std::cout	<< "-------- Serialized Human --------" << std::endl;
	std::cout 	<<	serializedHuman << std::endl;

	Data		*deserializedHuman = deserialize(serializedHuman);
		std::cout	<< "---- Deserialized Human ------" << std::endl
				<< "Name: " << deserializedHuman->name	<< std::endl
				<< "Age: "	<< deserializedHuman->age	<< std::endl
				<< "Job: "	<< deserializedHuman->job	<< std::endl;			
	delete human;
}
