#include "Weapon.hpp"

Weapon::Weapon(const char *type) {
	std::cout << "Weapon constructor called" << std::endl;
	this->type = type;
}

Weapon::~Weapon() {
	std::cout << "Weapon destructor called" << std::endl;
}

void Weapon::setType(const char *type) {
	this->type = type;
}

const std::string &Weapon::getType() const {
	return this->type;
}
