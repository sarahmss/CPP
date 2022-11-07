/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:56:10 by coder             #+#    #+#             */
/*   Updated: 2022/11/06 20:56:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	*_vector;

		class MaxElementsAchievedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class NoSpanException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	public:

		Span( void );
		Span( unsigned int N );
		Span( Span const & src );
		~Span( void );

		unsigned int	getN( void ) const;
		void			printSpan( void );
		Span &			operator=( Span const & rhs );

		void		addNumber(int number);
		void		addNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2);
		int			shortestSpan( void );
		int			longestSpan( void );
};


#endif /* ************************************************************ SPAN_H */