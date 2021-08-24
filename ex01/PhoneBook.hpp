#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>

class	PhoneBook
{
	public:
		PhoneBook();
		void search_contacts(void);
		void add_oldest_contact(void);
	protected:
	private:
		contact contacts[8];
		int		oldest_contact;
};

#endif // PHONEBOOK_HPP