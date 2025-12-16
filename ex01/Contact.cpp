/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 02:10:38 by skomatsu          #+#    #+#             */
/*   Updated: 2025/09/23 03:54:29 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName() const
{
    return (this->_first_name);
}

std::string Contact::getLastName() const
{
    return (this->_last_name);
}

std::string Contact::getNickname() const
{
    return (this->_nickname);
}

std::string Contact::getPhoneNumber() const
{
    return (this->_phone_number);
}

std::string Contact::getSecret() const
{
    return (this->_secret);
}

int Contact::setFirstName(std::string first_name)
{   
    if (first_name == "")
        return (1);
    for(size_t i = 0; i < first_name.size(); i++)
    {
        if (!std::isalpha(first_name[i]))
        {
            if (std::isspace(first_name[i]))
                continue;
            else
                return (1);
        }
    }

    this->_first_name = first_name;
    return (0);
}

int Contact::setLastName(std::string last_name)
{
    if (last_name == "")
        return (1);
    for(size_t i = 0; i < last_name.size(); i++)
    {
        if (!std::isalpha(last_name[i]))
        {
            if (std::isspace(last_name[i]))
                continue;
            else
                return (1);
        }
    }
    this->_last_name = last_name;
    return (0);
}

int Contact::setNickname(std::string nickname)
{
    if (nickname == "")
        return (1);
    for(size_t i = 0; i < nickname.size(); i++)
    {
        if (!std::isalpha(nickname[i]))
        {
            if (std::isspace(nickname[i]))
                continue;
            else
                return (1);
        }
    }
    this->_nickname = nickname;
    return (0);
}

int Contact::setPhoneNumber(std::string phone_number)
{
    if (phone_number.size() > 15 || phone_number == "")
        return (1);
    for(size_t i = 0; i < phone_number.size(); i++)
    {
        if (!std::isdigit(phone_number[i]))
            return (1);
    }
    this->_phone_number = phone_number;
    return (0);
}

int Contact::setSecret(std::string secret)
{
    if (secret == "")
        return (1);
    this->_secret = secret;
    return (0);
}
