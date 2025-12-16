/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 15:51:56 by skomatsu          #+#    #+#             */
/*   Updated: 2025/12/15 22:35:01 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string content;

    std::cout << "Input <ADD>, <SEARCH>, <EXIT>" << std::endl;
    while (1)
    {
        std::cout << "PhoneBook >";
        if (!std::getline(std::cin, content))
            break;
        if (content == "ADD")
            phonebook.addContact();
        else if (content == "SEARCH")
            phonebook.searchContact();
        else if (content == "EXIT")
        {
            std::cout << "EXIT" << std::endl;
            break;
        }
        else    
            std::cout << "Input <ADD>, <SEARCH>, <EXIT>" << std::endl;
    }   
    return (0);
}
