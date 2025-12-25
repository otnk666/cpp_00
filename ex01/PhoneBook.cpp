/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 19:47:22 by skomatsu          #+#    #+#             */
/*   Updated: 2025/12/25 22:12:30 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string trimForDisplay(std::string elem)
{
    if (elem.size() > 10)
    {
        elem[9] = '.';
        elem.erase(10, elem.size() - 10);
    }
    return (elem);
}

void PhoneBook::addContact() 
{
    Contact new_contact;
    std::string input;
    
    // First Name
    while (1) {
        std::cout << "First Name: ";
        if (!std::getline(std::cin, input))
            return;
        if (!input.empty() && new_contact.setFirstName(input) == 0)
            break;
        std::cout << "INVALID INPUT : First Name" << std::endl;
    }

    // Last Name
    while (1) {
        std::cout << "Last Name: ";
        if (!std::getline(std::cin, input))
            return;
        if (!input.empty() && new_contact.setLastName(input) == 0)
            break;
        std::cout << "INVALID INPUT : Last Name" << std::endl;
    }

    // Nickname
    while (1) {
        std::cout << "Nickname: ";
        if (!std::getline(std::cin, input))
            return;
        if (!input.empty() && new_contact.setNickname(input) == 0)
            break;
        std::cout << "INVALID INPUT : Nickname" << std::endl;
    }

    // Phone Number
    while (1) {
        std::cout << "Phone Number: ";
        if (!std::getline(std::cin, input))
            return;
        if (!input.empty() && new_contact.setPhoneNumber(input) == 0)
            break;
        std::cout << "INVALID INPUT : Phone Number" << std::endl;
    }

    // Darkest Secret
    while (1) {
        std::cout << "Darkest Secret: ";
        if (!std::getline(std::cin, input))
            return;
        if (!input.empty() && new_contact.setSecret(input) == 0)
            break;
        std::cout << "INVALID INPUT : Darkest Secret" << std::endl;
    }
    
    _contact[_index] = new_contact;
    _index = (_index + 1) % 8;
    if (_count < 8)
        _count++;
    std::cout << "Registration complete!" << std::endl;
}

void PhoneBook::searchContact()
{
    std::string input;
    int index;
    
    if (_count == 0) {
        std::cout << "No contacts saved" << std::endl;
        return;
    }
    
    displayPhonebook();

    std::cout << "Enter index for searching" << std::endl;
    if(!std::getline(std::cin, input))
        return;
    if (input.length() != 1 || !std::isdigit(input[0])) 
    {
        std::cout << "Invalid input" << std::endl;
        return;
    }
    index = input[0] - '0';
    if (index < 0 || index >= _count)
    {
        std::cout << "Index out of range" << std::endl;
        return;
    }
    
    std::cout << "First Name :" <<  _contact[index].getFirstName() << std::endl;
    std::cout << "Last Name :" << _contact[index].getLastName() << std::endl;
    std::cout << "Nickname :" << _contact[index].getNickname() << std::endl; 
    std::cout << "Phone Number :" << _contact[index].getPhoneNumber() << std::endl;
    std::cout << "Secret :" << _contact[index].getSecret() << std::endl;
}

void PhoneBook::displayPhonebook()
{
    std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
    for (int i = 0; i < _count; i++)
    {
        std::cout << "|" << std::setw(10) << i ;
        std::cout << "|" << std::setw(10) << trimForDisplay(_contact[i].getFirstName());
        std::cout << "|" << std::setw(10) << trimForDisplay(_contact[i].getLastName());
        std::cout << "|" << std::setw(10) << trimForDisplay(_contact[i].getNickname()) << "|"<< std::endl;
    }
}
