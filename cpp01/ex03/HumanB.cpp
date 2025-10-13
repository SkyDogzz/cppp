#include "HumanB.hpp"

HumanB::HumanB(const char *name) {
	std::cout << "HumanB constructor called" << std::endl;
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB() {
	std::cout << "HumanB destructor called" << std::endl;
}

void HumanB::attack() {
	if (!this->weapon)
	{
		std::cout << this->name << " no weapon given yet." << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
