#include <iostream>

#include "DiamondTrap.hpp"

int main() {
	std::cout << "===== Constructing DiamondTrap =====" << std::endl;
	DiamondTrap dtrap("SHINY");

	std::cout << "\n===== Initial Stats =====" << std::endl;
	std::cout << "SHINY -> HP:" << dtrap.getHitPoints() << " | EP:" << dtrap.getEnergyPoints()
			  << " | AD:" << dtrap.getAttackDamage() << std::endl;

	std::cout << "\n===== Basic Actions =====" << std::endl;
	dtrap.attack("Training Dummy");
	dtrap.takeDamage(30);
	dtrap.beRepaired(20);

	std::cout << "\n===== Special Abilities =====" << std::endl;
	dtrap.guardGate();
	dtrap.highFivesGuys();
	dtrap.whoAmI();

	std::cout << "\n===== Final Stats =====" << std::endl;
	std::cout << "SHINY -> HP:" << dtrap.getHitPoints() << " | EP:" << dtrap.getEnergyPoints()
			  << " | AD:" << dtrap.getAttackDamage() << std::endl;

	return 0;
}
