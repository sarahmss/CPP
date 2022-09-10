/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:40:50 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 15:32:57 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

/*
    - std::cout             // Prevents ambiguity thanks to the use of object's
                                full name
    - using std::cout       // uses a directive for each name in std
    - using namespace std   // release access to every name in std namespace
                                 (conflit)
*/
void    upper_word(char *word)
{
    char    buffer[100];
    int     i;

    for (i = 0; word[i] != '\0'; i++)
    {
        buffer[i]  = toupper(word[i]);
    }
    buffer[i] = '\0';
    std::cout << buffer;
}

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; argv[i] != NULL; i++)
        {
            upper_word(argv[i]);
        }
        std::cout << std::endl;
    }
}
