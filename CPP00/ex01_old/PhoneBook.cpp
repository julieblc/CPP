#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook() : _count(0), _nextIndex(0)
{
}

std::string	PhoneBook::promptField(std::string const &label) const
{
	std::string	value;

	while (true)
	{
		std::cout << label << ": ";
		if (!std::getline(std::cin, value))
		{
			std::cout << std::endl;
			return ("");
		}
		if (!value.empty())
			return (value);
		std::cout << "This field cannot be empty. Please try again." << std::endl;
	}
}

std::string	PhoneBook::truncate(std::string const &str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::printRow(std::string const &c1, std::string const &c2,
		std::string const &c3) const
{
	std::cout << std::setw(10) << c1 << "|"
		<< std::setw(10) << c2 << "|"
		<< std::setw(10) << c3 << std::endl;
}

void	PhoneBook::addContact()
{
	Contact	contact;
	std::string	firstName = promptField("First name");
	if (std::cin.eof())
		return ;
	std::string	lastName = promptField("Last name");
	if (std::cin.eof())
		return ;
	std::string	nickname = promptField("Nickname");
	if (std::cin.eof())
		return ;
	std::string	phoneNumber = promptField("Phone number");
	if (std::cin.eof())
		return ;
	std::string	darkestSecret = promptField("Darkest secret");
	if (std::cin.eof())
		return ;

	contact.setFirstName(firstName);
	contact.setLastName(lastName);
	contact.setNickname(nickname);
	contact.setPhoneNumber(phoneNumber);
	contact.setDarkestSecret(darkestSecret);

	_contacts[_nextIndex] = contact;
	_nextIndex = (_nextIndex + 1) % MAX_CONTACTS;
	if (_count < MAX_CONTACTS)
		_count++;
	std::cout << "Contact added successfully." << std::endl;
}

void	PhoneBook::searchContacts() const
{
	if (_count == 0)
	{
		std::cout << "The phonebook is empty." << std::endl;
		return ;
	}

	printRow("Index", "First Name", "Last Name");
	for (int i = 0; i < _count; i++)
	{
		std::ostringstream	oss;
		oss << i;
		printRow(oss.str(), truncate(_contacts[i].getFirstName()),
			truncate(_contacts[i].getLastName()));
	}

	std::cout << "Enter the index of a contact to view (or anything else to go back): ";
	std::string	input;
	if (!std::getline(std::cin, input))
	{
		std::cout << std::endl;
		return ;
	}

	std::istringstream	iss(input);
	int	index;
	if (!(iss >> index) || !(iss.eof()) || index < 0 || index >= _count)
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}

	Contact const	&c = _contacts[index];
	std::cout << "First Name:    " << c.getFirstName() << std::endl;
	std::cout << "Last Name:     " << c.getLastName() << std::endl;
	std::cout << "Nickname:      " << c.getNickname() << std::endl;
	std::cout << "Phone Number:  " << c.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << c.getDarkestSecret() << std::endl;
}
