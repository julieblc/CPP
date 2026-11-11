#include "PhoneBook.hpp"
#include <iostream>

int main()
{
    PhoneBook phonebook;
    std::string command;

    while (true)
    {
        std::cout << "Enter a command ADD, SEARCH or EXIT: ";
        if (!std::getline(std:: cin, command))
            break;
        if (command == "ADD")
            phonebook.add();
        else if (command == "SEARCH")
            phonebook.search();
        else if (command == "EXIT")
            break;
    }
    return (0);
}