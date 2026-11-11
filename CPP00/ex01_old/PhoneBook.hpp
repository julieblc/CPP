#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define MAX_CONTACTS 8

class PhoneBook
{
	private:
		Contact	_contacts[MAX_CONTACTS];
		int		_count;
		int		_nextIndex;

		std::string	promptField(std::string const &label) const;
		std::string	truncate(std::string const &str) const;
		void		printRow(std::string const &c1, std::string const &c2,
					std::string const &c3) const;

	public:
		PhoneBook();

		void	addContact();
		void	searchContacts() const;
};

#endif
