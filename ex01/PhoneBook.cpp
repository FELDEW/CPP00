#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	oldest_contact = 0;
}
void	PhoneBook::add_oldest_contact()
		{
			oldest_contact %= 8;
			contacts[oldest_contact].fill_contact();
			oldest_contact++;
		}
void	PhoneBook::search_contacts()
		{
			for (int i = 0; i < 8; i++)
			{
				if (contacts[i].is_filled())
				{
					contacts[i].print_formatted_info();
					std::cout << "         " << i << "|";
				}
			}
		}