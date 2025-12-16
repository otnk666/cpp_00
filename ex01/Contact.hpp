#pragma once

#include <iostream>
#include <cctype>
#include <string>

class   Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _secret;

    public:
        Contact() {}

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhoneNumber() const;
        std::string getSecret() const;

        int     setFirstName(std::string first_name);
        int     setLastName(std::string last_name);
        int     setNickname(std::string nickname);
        int     setPhoneNumber(std::string phone_number);
        int     setSecret(std::string secret);
};
