/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 00:16:58 by wprintes          #+#    #+#             */
/*   Updated: 2023/10/15 00:24:42 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"

int main(void)
{
    Data initialData("Bob", 45);
    Data *returnedData;
    
    uintptr_t intPtr;

    std::cout << std::endl;
    std::cout << "Original Data: " << initialData << std::endl;

    intPtr = Serializer::serialize(&initialData);
    std::cout << std::endl;

    std::cout << "uintptr_t: " << intPtr << std::endl;
    std::cout << std::endl;

    returnedData = Serializer::deserialize(intPtr);
    std::cout << "Returned Data: " << *returnedData << std::endl;
    std::cout << std::endl;

    return 0;
}
