/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:33:56 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/08 14:10:06 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void){
    Harl test;

    test.complain("debug");
    test.complain("info");
    test.complain("warning");
    test.complain("error");
    test.complain("outra coisa");
}