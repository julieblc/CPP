#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;

	public:
		Contact();

		void setFirstName(std::string const &firstName);
		void setLastName(std::string const &lastName);
		void setNickname(std::string const &nickname);
		void setPhoneNumber(std::string const &phoneNumber);
		void setDarkestSecret(std::string const &darkestSecret);

		std::string const &getFirstName() const;
		std::string const &getLastName() const;
		std::string const &getNickname() const;
		std::string const &getPhoneNumber() const;
		std::string const &getDarkestSecret() const;

		bool isEmpty() const;
};

#endif
