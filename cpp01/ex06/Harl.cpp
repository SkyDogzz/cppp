#include "Harl.hpp"

static void printErr(std::string err) {
	std::cerr << err << std::endl;
}

void Harl::debug() {
	printErr("Debug: i wish var_dump thingy like php existed");
}

void Harl::info() {
	printErr("Info: i inform you this this an info");
}

void Harl::warning() {
	printErr("Warning: warning");
}

void Harl::error() {
	printErr("Error: did something broke ? i wonder ...");
}

void Harl::complain(std::string level) {
	HarlCor levels[] = {
		{"debug", Harl::debug}, {"info", Harl::info}, {"warning", Harl::warning}, {"error", Harl::error}};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i].level) {
			for (int j = 0; j < 4 - i; j++) {
				levels[i + j].fn();
			}
			return;
		}
	}
	printErr("Log level not found");
}
