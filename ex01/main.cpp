#include <iostream>
#include "PhoneBook.hpp"

int	error(const char *msg)
{
	std::cout << msg << std::endl;
	return (1);
}

void	do_commands(void)
{
	PhoneBook	phonebook;
	std::string command;
	int			finish;
	
	finish = 0;
	while (finish == 0)
	{
		std::cout << "Input commands ADD, SEARCH or EXIT: ";
		std::getline(std::cin, command);
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