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
	int lvl = -1;

	if (level == "debug")
		lvl = 0;
	else if (level == "info")
		lvl = 1;
	else if (level == "warning")
		lvl = 2;
	else if (level == "error")
		lvl = 3;

	switch (lvl) {
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			printErr("Log level not found");
	}
}
