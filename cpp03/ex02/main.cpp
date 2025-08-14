#include <iostream>

#include "FragTrap.hpp"

int main()
{
	std::cout << "\n=== CONSTRUCTION ===" << std::endl;
	FragTrap fraggy("Fraggy");

	std::cout << "\n=== ACTIONS ===" << std::endl;
	fraggy.attack("BadBot");
	fraggy.takeDamage(25);
	fraggy.beRepaired(10);
	fraggy.highFivesGuys();

	std::cout << "\n=== ENERGY DRAIN ===" << std::endl;
	for (int i = 0; i < 100; ++i)
		fraggy.attack("Dummy");

	std::cout << "\n=== TRY TO ATTACK WITH 0 ENERGY ===" << std::endl;
	fraggy.attack("OutOfPower");

	std::cout << "\n=== DESTRUCTION ===" << std::endl;
	return 0;
}
