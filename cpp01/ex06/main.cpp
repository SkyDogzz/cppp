#include "Harl.hpp"

int main(void) {
	{
		Harl::complain("debug");
		std::cout << std::endl;

		Harl::complain("info");
		std::cout << std::endl;

		Harl::complain("warning");
		std::cout << std::endl;

		Harl::complain("error");
		std::cout << std::endl;
	}

	Harl::complain("nothing");
}
