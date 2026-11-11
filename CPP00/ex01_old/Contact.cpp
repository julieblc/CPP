#include "Contact.hpp"

Contact::Contact() : _firstName(""), _lastName(""), _nickname(""),
	_phoneNumber(""), _darkestSecret("")
{
}

void	Contact::setFirstName(std::string const &firstName)
{
	_firstName = firstName;
}

void	Contact::setLastName(std::string const &lastName)
{
	_lastName = lastName;
}

void	Contact::setNickname(std::string const &nickname)
{
	_nickname = nickname;
}

void	Contact::setPhoneNumber(std::string const &phoneNumber)
{
	_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string const &darkestSecret)
{
	_darkestSecret = darkestSecret;
}

std::string const	&Contact::getFirstName() const
{
	return (_firstName);
}

std::string const	&Contact::getLastName() const
{
	return (_lastName);
}

std::string const	&Contact::getNickname() const
{
	return (_nickname);
}

std::string const	&Contact::getPhoneNumber() const
{
	return (_phoneNumber);
}

std::string const	&Contact::getDarkestSecret() const
{
	return (_darkestSecret);
}

bool	Contact::isEmpty() const
{
	return (_firstName.empty());
}
