/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:45:26 by wprintes          #+#    #+#             */
/*   Updated: 2023/08/02 10:22:38 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    this->_index = 0;
};

Phonebook::~Phonebook(){

};

static std::string getLineNotEmpty(std::string text)
{
    std::string line;

    while (std::getline(std::cin, line))
    {
        if (line != "")
            return line;
        std::cout << "Invalid input, : contact can’t have empty fields\n";
        std::cout << text;
    }

    return (line);
}

void Phonebook::add(void)
{
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    std::cout << "Contact fields\n";
    std::cout << "First name: ";
    firstName = getLineNotEmpty("First name: ");
    std::cout << "Last name: ";
    lastName = getLineNotEmpty("Last name: ");
    std::cout << "Nickname: ";
    nickname = getLineNotEmpty("Nickname: ");
    std::cout << "Phone number: ";
    phoneNumber = getLineNotEmpty("Phone number: ");
    std::cout << "Darkest secret: ";
    darkestSecret = getLineNotEmpty("Darkest secret: ");
    this->_contacts[this->_index].setFirstName(firstName);
    this->_contacts[this->_index].setLastName(lastName);
    this->_contacts[this->_index].setNickname(nickname);
    this->_contacts[this->_index].setPhoneNumber(phoneNumber);
    this->_contacts[this->_index].setDarkestSecret(darkestSecret);
    std::cout << _contacts[this->_index].getFirstName() << " added!\n";
    this->_index++;
    if (this->_index == 8)
        this->_index = 0;
}

void Phonebook::search(void)
{
    int index = -1;
    int i = 0;

    if (this->_contacts[i].getFirstName() == ""){
        std::cout << "No Contacts" << std::endl;
        return ;
    }
    std::cout << std::right << std::setw(10) << "Index"
              << "|";
    std::cout << std::right << std::setw(10) << "First Name"
              << "|";
    std::cout << std::right << std::setw(10) << "Last Name"
              << "|";
    std::cout << std::right << std::setw(10) << "Nickname"
              << "|" << std::endl;
    while (i < 8)
    {
        if (this->_contacts[i].getFirstName() == "")
            break;
        std::cout << std::setw(10) << i << "|";
        _showFields(this->_contacts[i]);
        i++;
    }
    std::cout << "insert index: ";
    while (index == -1)
    {
        std::cin >> index;
        if (std::cin.fail() || index >= i)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            index = -1;
            std::cout << "Invalid index\ninsert index: ";
        }
    }
    _showAllFields(index);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void Phonebook::_showAllFields(int index)
{
    std::cout << std::right << "\nFirst name: " << _contacts[index].getFirstName() << "\n";
    std::cout << std::right << "Last name: " << _contacts[index].getLastName() << "\n";
    std::cout << std::right << "Nickname: " << _contacts[index].getNickname() << "\n";
    std::cout << std::right << "Phone Number: " << _contacts[index].getPhoneNumber() << "\n";
    std::cout << std::right << "dark secret: " << _contacts[index].getDarkestSecret() << std::endl;
}

void Phonebook::_showFields(Contact contact)
{
    std::string fName;
    std::string lName;
    std::string nickname;

    fName = (contact.getFirstName().length() > 10) ? contact.getFirstName().substr(0, 9) + "." : contact.getFirstName();
    lName = (contact.getLastName().length() > 10) ? contact.getLastName().substr(0, 9) + "." : contact.getLastName();
    nickname =(contact.getNickname().length() > 10) ? contact.getNickname().substr(0, 9) + "." : contact.getNickname();
    std::cout << std::right << std::setw(10) << fName << "|";
    std::cout << std::right << std::setw(10) << lName << "|";
    std::cout << std::right << std::setw(10) << nickname << "|" << std::endl;
}
