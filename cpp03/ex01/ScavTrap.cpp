#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called for: " << name << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap(scavtrap)
{
	std::cout << "ScavTrap copy constructor called for: " << scavtrap.name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	ClapTrap::operator=(scavtrap);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for: " << this->name << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0) {
		std::cout << "ScavTrap " << this->name << " has no energy or is dead... 💀" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " viciously attacks " << target << ", causing " << this->attackDamage
			  << " points of damage! ⚔️🔥" << std::endl;
	this->energyPoints--;
}

void ScavTrap::guardGate()
{
	std::cout << "Scavtrap " << name << " is now in Gate keeper mode" << std::endl;
}
