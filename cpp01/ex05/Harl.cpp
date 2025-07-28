#include "Harl.hpp"

void Harl::debug() {}

void Harl::info() {}

void Harl::warning() {}

void Harl::error() {}

void Harl::complain(std::string level) {
	HarlCor levels[] = {
		{"debug", Harl::debug}, {"info", Harl::info}, {"warning", Harl::warning}, {"error", Harl::error}};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i].level)
			std::cout << i << std::endl;
	}
}
