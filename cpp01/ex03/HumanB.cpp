#include "HumanB.hpp"

HumanB::HumanB(const char *name) {
	std::cout << "HumanB constructor called" << std::endl;
	this->name = name;
}

HumanB::~HumanB() {
	std::cout << "HumanB destructor called" << std::endl;
}

void HumanB::attack() {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
