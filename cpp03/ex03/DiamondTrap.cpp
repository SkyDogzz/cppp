#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap(const std::string& name) 
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name) {
    std::cout << "Constructor DiamondTrap called for " << this->name << "." << std::endl;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) 
    : ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name) {
    std::cout << "Copy constructor DiamondTrap called for " << this->name << "." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    std::cout << "Assignment operator DiamondTrap called for " << other.name << "." << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
        this->name = other.name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "Destructor DiamondTrap called for " << this->name << "." << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << this->name 
              << " | ClapTrap name: " << ClapTrap::name << std::endl;
}
