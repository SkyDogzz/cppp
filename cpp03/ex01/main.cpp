#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "\n=== CONSTRUCTION ===" << std::endl;
	ClapTrap basic("BasicBot");
	ScavTrap guardian("GuardianBot");

	std::cout << "\n=== ACTIONS (ClapTrap) ===" << std::endl;
	basic.attack("Target A");
	basic.takeDamage(3);
	basic.beRepaired(2);

	std::cout << "\n=== ACTIONS (ScavTrap) ===" << std::endl;
	guardian.attack("Target B");
	guardian.takeDamage(20);
	guardian.beRepaired(15);
	guardian.guardGate();

	std::cout << "\n=== ENERGY DRAIN (ScavTrap) ===" << std::endl;
	for (int i = 0; i < 50; ++i) {
		guardian.attack("Dummy");
	}

	std::cout << "\n=== TRY TO ATTACK WITH 0 ENERGY ===" << std::endl;
	guardian.attack("Out of juice");

	std::cout << "\n=== DESTRUCTION ===" << std::endl;
	return 0;
}
