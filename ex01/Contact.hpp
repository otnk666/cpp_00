#ifndef CONTACT_HPP
#define CONTACT_HPP

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
        ~Contact() {}

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhoneNumber() const;
        std::string getSecret() const;

        int     setFirstName(const std::string& first_name);
        int     setLastName(const std::string& last_name);
        int     setNickname(const std::string& nickname);
        int     setPhoneNumber(const std::string& phone_number);
        int     setSecret(const std::string& secret);
};

#endif
