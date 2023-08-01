/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:45:11 by wprintes          #+#    #+#             */
/*   Updated: 2023/07/28 14:45:12 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[]){
    
    std::string text;

    if (argc < 2){
     std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
     return (0);   
    }
    for (int i = 1; i < argc; i++){
        text = argv[i];
        for (size_t j = 0; j < (size_t) text.size(); j++)
            std::cout << (char) toupper(text[j]);
    }
    std::cout << std::endl;
    return (0);
}
