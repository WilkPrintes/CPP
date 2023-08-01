/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:45:20 by wprintes          #+#    #+#             */
/*   Updated: 2023/07/28 16:07:35 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(CONTACT_HPP)
#define CONTACT_HPP
#include <string>

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;
public:
    int index;
    Contact(void);
    ~Contact(void);
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setNickname(std::string nickname);
    void setPhoneNumber(std::string phoneNumber);
    void setDarkestSecret(std::string darkestSecret);
    std::string getFirstName(void) const;
    std::string getLastName(void) const;
    std::string getNickname(void) const;
    std::string getPhoneNumber(void) const;
    std::string getDarkestSecret(void) const;
};
#endif