#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	std::cout << "Constructor ScavTrap called for " << this->name << "." << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "Copy constructor ScavTrap called for " << other.name << "." << std::endl;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "Assignment operator ScavTrap called for " << other.name << "." << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap called for " << this->name << "." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->energyPoints == 0 || this->hitPoints == 0) {
		std::cout << "ScavTrap " << this->name << " has no energy or is broken. Can't attack!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage
			  << " points of damage!" << std::endl;
	this->energyPoints--;
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode." << std::endl;
}
