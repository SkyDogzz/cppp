#include <cstdlib>
#include <iostream>

#include "ClapTrap.hpp"

int main()
{
	ClapTrap bot1("Terminator");
	ClapTrap bot2("Wall-E");

	std::cout << "\n=== ROUND 1 ===" << std::endl;
	bot1.attack("Wall-E");
	bot2.takeDamage(0);

	std::cout << "\n=== ROUND 2 ===" << std::endl;
	bot2.beRepaired(5);

	std::cout << "\n=== ROUND 3 ===" << std::endl;
	bot1.attack("Wall-E");
	bot2.takeDamage(0);

	std::cout << "\n=== DRAIN ENERGY ===" << std::endl;
	for (int i = 0; i < 10; ++i) {
		bot1.attack("Dummy");
	}

	std::cout << "\n=== TRY TO ATTACK WITH 0 ENERGY ===" << std::endl;
	bot1.attack("Wall-E");

	return 0;
}
