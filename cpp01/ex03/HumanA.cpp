#include "HumanA.hpp"

HumanA::HumanA(const char *name, Weapon &weapon) {
	std::cout << "HumanA constructor called" << std::endl;
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA() {
	std::cout << "HumanA destructor called" << std::endl;
}

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
