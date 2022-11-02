/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:25:13 by coder             #+#    #+#             */
/*   Updated: 2022/11/02 20:29:43 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data *ptr)
{
	return ( reinterpret_cast<uintptr_t>(ptr) );
}

Data *deserialize(uintptr_t raw)
{
	return ( reinterpret_cast<Data *>(raw) );
}
