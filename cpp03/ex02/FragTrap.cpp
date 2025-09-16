#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	std::cout << "Constructor FragTrap called for " << this->name << "." << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "Copy constructor FragTrap called for " << other.name << "." << std::endl;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "Assignment operator FragTrap called for " << other.name << "." << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor FragTrap called for " << this->name << "." << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->name << " launches a High Five (just free aura farm)." << std::endl;
}
