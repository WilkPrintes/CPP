/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:36:34 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/18 10:52:06 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void randomizeVector(std::vector<int> &v, int size)
{
    int value;

    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        value = rand() % 10;
        v.push_back(value);
    }
}

int main(void)
{
    std::vector<int> v;
    std::vector<int>::iterator it;

    randomizeVector(v, 10);

    std::cout << "vector: " << v << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
    {
        try
        {
            std::cout << i << ": ";
            it = easyfind(v, i);
            std::cout << *it << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}