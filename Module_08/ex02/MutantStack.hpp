/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:56:02 by coder             #+#    #+#             */
/*   Updated: 2022/11/07 03:17:26 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <deque>
# include <vector>

template <typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack( void ) : std::stack< T, Container>(){ return ; };
		MutantStack( MutantStack const & src ): std::stack< T, Container>(src){ return ; };
		~MutantStack( void ) { return ; };

		MutantStack &			operator=( MutantStack const & rhs )
		{
			std::stack<T, Container>::operator=(rhs);
			return (*this);
		};

		typedef typename	Container::iterator	iterator;

		typename			Container::iterator	begin() { return (this->c.begin()); }
		typename			Container::iterator	end() { return (this->c.end()); }
};


#endif /* ************************************************************ MutantStack_H */