#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap construtor called for : " << name << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	std::cout << "ClapTrap copy constructor called for: " << claptrap.name << std::endl;
	this->name = claptrap.name;
	this->hitPoints = claptrap.hitPoints;
	this->energyPoints = claptrap.energyPoints;
	this->attackDamage = claptrap.attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	this->name = claptrap.name;
	this->hitPoints = claptrap.hitPoints;
	this->energyPoints = claptrap.energyPoints;
	this->attackDamage = claptrap.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for : " << this->name << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints <= 0) {
		std::cout << "ClapTrap " << this->name << " have 0 energy left" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << " ,causing " << this->attackDamage
			  << " points of damage!" << std::endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	this->hitPoints -= amount;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0) {
		std::cout << "ClapTrap " << this->name << " have 0 energy left" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " is repaired, recovering " << amount << " hit points!" << std::endl;
	this->energyPoints--;
}
