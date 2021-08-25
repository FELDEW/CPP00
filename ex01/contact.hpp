#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class contact
{
	public:
		contact();
		bool	is_filled(void);
		void	print_full_info(void);
		void	print_formatted_info(int i);
		void	fill_contact(void);
	protected:
	private:
		void	print_formatted_field(std::string str);
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		bool		filled;
};

#endif // CONTACT_HPP