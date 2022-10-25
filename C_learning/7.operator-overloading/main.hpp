/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:13:41 by smodesto          #+#    #+#             */
/*   Updated: 2022/10/05 04:10:30 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <string>
#include <list>

struct YouTubeChannel {
	std::string	Name;
	int			SubscribersCount;
	
	YouTubeChannel(std::string name, int subscribersCount);
	bool	operator==(YouTubeChannels & channel);

}

struct MyCollection {
	std::string	Name;
	int			SubscribersCount;
	
	list < YouTubeChannel > myChannels;
	void	operator-=(YouTubeChannels & channel);
	void	operator+=(YouTubeChannels & channel);

}

ostream	&operator<<(std::ostream & COUT, MyCollection & myCollection);

#endif
