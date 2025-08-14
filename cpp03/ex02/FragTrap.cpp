#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called for: " << name << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called for: " << other.name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for: " << this->name << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0) {
		std::cout << "FragTrap " << this->name << " can't attack... No energy or already KO 💀" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->name << " launches a blast at " << target << ", causing " << this->attackDamage
			  << " points of damage! 💣💥" << std::endl;
	this->energyPoints--;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " says: ✋ High five, guys! ✋" << std::endl;
}
