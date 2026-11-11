#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
    _next = 0;
    _count = 0;
}

void    PhoneBook::add()
{
    std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

    while (firstName.empty() && !std::cin.eof())
    {
        std::cout << "First name: ";
        std::getline(std::cin, firstName);
    }
    while (lastName.empty() && !std::cin.eof())
    {
        std::cout << "Last name: ";
        std::getline(std::cin, lastName);
    }
    while (nickName.empty() && !std::cin.eof())
    {
        std::cout << "Nick name: ";
        std::getline(std::cin, nickName);
    }
    while (phoneNumber.empty() && !std::cin.eof())
    {
        std::cout << "Phone number: ";
        std::getline(std::cin, phoneNumber);
    }
    while (darkestSecret.empty() && !std::cin.eof())
    {
        std::cout << "Darkest secret: ";
        std::getline(std::cin, darkestSecret);
    }
    if (std::cin.eof())
        return ;
    _contacts[_next].fill(firstName, lastName, nickName, phoneNumber, darkestSecret);
    _next = (_next + 1) % 8;
    if (_count < 8)
        _count++;
}

void    PhoneBook::search()
{
    int i = 0;
    std::string input;

    if (_count == 0)
    {
        std::cout << "The phonebook is empty." << std::endl;
        return ;
    }
    while (i < _count)
    {
        _contacts[i].displayRow(i);
        i++;
    }
    std::cout << "Enter an index: ";
    if (!std::getline(std::cin, input))
        return;
    if (input.length() != 1 || input[0] < '0' || input[0] >= '0' + _count)
    {
        std::cout << "Invalid index." << std::endl;
        return ;
    }
    _contacts[input[0] - '0'].display();
}