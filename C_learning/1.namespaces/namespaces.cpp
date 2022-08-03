/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespaces.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 02:02:42 by coder             #+#    #+#             */
/*   Updated: 2022/08/03 02:12:56 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

/*  
    - std is the default namespace for cpp 
    - <using> this means that all the names must come from there
    - we can use <using std::cout> to prevents ambiguity
*/
using namespace std; 

namespace first_space
{
    void    func()
    {
        cout << "inside first_space" << endl;
    }
}

namespace second_space
{
    void    func()
    {
        cout << "inside second_space" << endl;
    }
}

/*
    1. since both, second and first namespaces contains func(),
        we need to use complete object name.
    2. We can add (using namespaces [space name]) directive which tells the compiler that the
        subsequent code is making use of names in the specified namespace.      
*/
using namespace first_space;

int main(void)
{
    first_space::func();
    second_space::func();    
    func();
}