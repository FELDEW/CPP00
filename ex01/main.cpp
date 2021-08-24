#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "contact.hpp"

int	error(const char *msg)
{
	std::cout << msg << std::endl;
	return (1);
}

void	print_formatted_field(std::string str)
{
	if (str.length > 10)
		std::cout << std::setw(10) << str.substr(0, 9).append(".") << "|";
	else
		std::cout << std::right << std::setfill(' ') << std::setw(10) << str << "|";
	std::cout << std::endl;
}

void	do_commands(void)
{
	PhoneBook	phonebook;
	std::string command;
	int			finish;
	
	finish = 0;
	while (finish == 0)
	{
		std::cin >> command;
		if (command == "EXIT")
			finish = 1;
		else if (command == "ADD")
			phonebook.add_oldest_contact();
		else if (command == "SEARCH")
			phonebook.search_contacts();
		else
			error("Use \"ADD\", \"SEARCH\" or \"EXIT\" commands only!");
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1 || argv[1] != NULL)
		return (error("No arguments required!"));
	do_commands();
	return (0);
	
}