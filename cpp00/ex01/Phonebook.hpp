/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:45:28 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/01 16:14:56 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
#include <limits>
#include <iomanip> 

class Phonebook
{

private:
    Contact _contacts[8];
    int _index;
    void _showFields(Contact contact);
    void _showAllFields(int index);

public:
    Phonebook();
    ~Phonebook();
    void add();
    void search();
};

#endif