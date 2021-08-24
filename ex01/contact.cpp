#include "contact.hpp"

contact::contact()
{
	filled = false;
}

void	contact::print_full_info(void)
{
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << darkest_secret << std::endl;
}

void	contact::fill_contact(void)
{
	std::cout << "Input contact's first name:" << std::endl;
	std::getline(std::cin >> std::ws, first_name);
	std::cout << "Input contact's last name:" << std::endl;
	std::getline(std::cin >> std::ws, last_name);
	std::cout << "Input contact's nickname:" << std::endl;
	std::getline(std::cin >> std::ws, nickname);
	std::cout << "Input contact's phone number:" << std::endl;
	std::getline(std::cin >> std::ws, phone_number);
	std::cout << "Input contact's darkest secret:" << std::endl;
	std::getline(std::cin >> std::ws, darkest_secret);
	filled = true;
}

bool	contact::is_filled(void)
{
	return (filled);
}

void	contact::print_formatted_info(void)
{
	
}