/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:01:01 by coder             #+#    #+#             */
/*   Updated: 2022/10/03 22:41:34 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./main.hpp"

YouTubeChannel::YouTubeChannel(std::string name, int subscribersCount)
{
	Name = name;
	SubscribersCount = subscribersCount;
}

/* Created as a member function that it is only overloaded for this data type */
void	MyCollection::operator+=(YouTubeChannels & channel)
{
	this->myChannels.push_back(channel);
}

void	MyCollection::operator-=(YouTubeChannels & channel)
{
	this->myChannels.remove(channel);
}

bool	YouTubeChannel::operator==(YouTubeChannels & channel)
{
	return (this->Name == channel.Name);
}

/* Paramaters are passed as a reference since we don't want a copy 
-because it isn't easy to copy- but the variable itself. 
	Created as a global function 
*/
ostream	&operator<<(std::ostream & COUT, YoutubeChannel & ytChannel)
{
	COUT << "Name: " << ytChannel.Name << std::endl;
	COUT << "Subscribers: " << ytChannel.SubscriberCounter << std::endl;
	return (COUT);
}

ostream	&operator<<(std::ostream & COUT, MyCollection & myCollection)
{
	for (YouTubeChannel ytChannel:myCollection.myCheannels) // for each ytChannel inside of myCollection list
	{
		COUT << ytChannel << std::end;
	}
	return (COUT);
}

// How insertion operator << should behave with a user defined data type
int main(void)
{
	YoutubeChannel	yt1 = YoutubeChannel("First Channel", 750000);
	YoutubeChannel	yt2 = YoutubeChannel("Second Channel", 800000);

	cout << yt1;
	cout << yt1 << yt2; 	/* in order to be able to print multiple objects in the same line
							our function must return COUT ostream	*/
	operator<<(cout, yt1); /* it can alsob be called as a function*/

	MyCollection	myCollection;
	myCollection += yt1;
	myCollection += yt2;

	cout << myCollection;
}
