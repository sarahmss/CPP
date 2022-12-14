/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:35:40 by coder             #+#    #+#             */
/*   Updated: 2022/09/15 02:10:05 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "includes.hpp"

std::string	ft_str_replace(std::string orig, std::string rep, std::string with)
{
	std::string	replaced;
	std::string	buffer;
	int			length;

	length = rep.length();
	buffer = orig;
	for (size_t i = 0; i != std::string::npos; i = buffer.find(rep))
	{
		if (i != std::string::npos && i != 0)
		{
			replaced.append(buffer.substr(0, i));
			replaced.append(with);
			buffer.erase(0, i + rep.length());
		}
	}
	replaced.append(buffer);
	return (replaced);
}

/*
	open the file <filename> and copies its content into a new file
	<filename>.replace, replacing every occurrence of s1 with s2.
*/
static void	replacing(std::string infile_name, std::string s1, std::string s2)
{
	std::ifstream		infile(infile_name.c_str());
	std::ofstream		outfile((infile_name + ".replace").c_str());
	std::string			line;

	if (!infile.is_open() || !outfile.is_open())
	{
		std::cout << IOERROR << std::endl;
		return ;
	}
	while (getline(infile, line))
		outfile << ft_str_replace(line, s1, s2).c_str() << "\n";
	infile.close();
	outfile.close();
}


int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << PARAMERROR << std::endl;
		return (EINVAL);
	}
	replacing(argv[1], argv[2], argv[3]);
}
