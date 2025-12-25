/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 02:10:38 by skomatsu          #+#    #+#             */
/*   Updated: 2025/12/25 21:47:32 by skomatsu         ###   ########.fr       */
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

static bool isOnlyWhitespace(const std::string& str)
{
    for (size_t i = 0; i < str.size() ; i++)
    {
        if(!std::isspace(static_cast<unsigned char>(str[i])))
            return (false);
    }
    return (true);
}

static bool isPrintableAscii(const std::string& str)
{
    for (size_t i = 0; i < str.size() ; i++)
    {
        if(!std::isprint(static_cast<unsigned char>(str[i])))
            return (false);
    }
    return (true);
}

int Contact::setFirstName(const std::string& first_name)
{   
    if (first_name.empty() || isOnlyWhitespace(first_name))
        return (1);

    if (!isPrintableAscii(first_name))
        return (1);
    this->_first_name = first_name;
    return (0);
}

int Contact::setLastName(const std::string& last_name)
{
    if (last_name.empty() || isOnlyWhitespace(last_name))
        return (1);

    if (!isPrintableAscii(last_name))
        return (1);
    this->_last_name = last_name;
    return (0);
}

int Contact::setNickname(const std::string& nickname)
{
    if (nickname.empty() || isOnlyWhitespace(nickname))
        return (1);

    if (!isPrintableAscii(nickname))
        return (1);
    this->_nickname = nickname;
    return (0);
}

int Contact::setPhoneNumber(const std::string& phone_number)
{
    if (phone_number.size() > 15 || phone_number.empty())
        return (1);
    if (isOnlyWhitespace(phone_number))
        return (1);
    for(size_t i = 0; i < phone_number.size(); i++)
    {
        if (!std::isdigit(static_cast<unsigned char>(phone_number[i])))
            return (1);
    }
    this->_phone_number = phone_number;
    return (0);
}

int Contact::setSecret(const std::string& secret)
{
    if (secret.empty() || isOnlyWhitespace(secret))
        return (1);
    if (!isPrintableAscii(secret))
        return (1);
    this->_secret = secret;
    return (0);
}
