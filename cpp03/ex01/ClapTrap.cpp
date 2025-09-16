#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "Constructor ClapTrap called for " << this->name << "." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	: name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
	std::cout << "Copy constructor ClapTrap called for " << this->name << "." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Assignement operator ClapTrap called for " << this->name << "." << std::endl;
	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor ClapTrap called for " << this->name << "." << std::endl;
}

std::string& ClapTrap::getName(void) {
	return this->name;
}

unsigned int ClapTrap::getHitPoints(void) const {
	return this->hitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) const {
	return this->energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const {
	return this->attackDamage;
}

void ClapTrap::attack(const std::string& target) {
	if (this->energyPoints == 0 || this->hitPoints == 0) {
		std::cout << "ClapTrap " << this->name << " has no energy or is broken. Can't attack!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage
			  << " points of damage!" << std::endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints == 0) {
		std::cout << "ClapTrap " << this->name << " is already broken." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage." << std::endl;
	if (this->hitPoints < amount)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;

	if (this->hitPoints == 0)
		std::cout << "ClapTrap " << this->name << " is broken." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints == 0 || this->hitPoints == 0) {
		std::cout << "ClapTrap " << this->name << " has no energy or is broken. Can't repair!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " recovers " << amount << " hit points." << std::endl;
	this->hitPoints += amount;
	this->energyPoints--;
}
