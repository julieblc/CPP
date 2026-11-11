#include "Contact.hpp"
#include <iostream>
#include <iomanip>

void    Contact::fill(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
    _firstName = firstName;
    _lastName = lastName;
	_nickName = nickName;
	_phoneNumber = phoneNumber;
	_darkestSecret = darkestSecret;
}

void    Contact::display()
{
    std::cout << "First name: " <<_firstName << std::endl;
    std::cout << "Last name: " <<_lastName << std::endl;
    std::cout << "Nick name: " <<_nickName << std::endl;
    std::cout << "Phone number: " <<_phoneNumber << std::endl;
    std::cout << "Darkest secret: " <<_darkestSecret << std::endl;
}

std::string Contact::truncate(std::string text)
{
    if (text.length() > 10)
        return (text.substr(0, 9) + ".");
    return (text);
}
void    Contact::displayRow(int index)
{
    std::cout << std::setw(10) << index << "|";
    std::cout << std::setw(10) << truncate(_firstName) << "|";
    std::cout << std::setw(10) << truncate(_lastName) << "|";
    std::cout << std::setw(10) << truncate(_nickName) << std::endl;
}