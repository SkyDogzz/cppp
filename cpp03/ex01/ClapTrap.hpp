#pragma once

#include <string>

class ClapTrap {
public:
	ClapTrap(std::string);
	ClapTrap(const ClapTrap &);
	ClapTrap &operator=(const ClapTrap &);
	~ClapTrap();

	void attack(const std::string &);
	void takeDamage(unsigned int);
	void beRepaired(unsigned int);

protected:
	std::string name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;
};
