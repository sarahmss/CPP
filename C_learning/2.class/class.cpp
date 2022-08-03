/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 02:26:08 by coder             #+#    #+#             */
/*   Updated: 2022/08/03 02:38:37 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <bits/stdc++.h>

using namespace std;

class dog
{
    public:
        string  dogname;
        void    printname()
        {
            cout << "dog name is: " << dogname << endl;
        }
};

int main(void)
{
    dog bethoven;

    bethoven.dogname = "bethoven";
    bethoven.printname();
}