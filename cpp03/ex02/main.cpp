#include <iostream>

#include "FragTrap.hpp"

int main() {
	std::cout << "===== Constructing FragTrap =====" << std::endl;
	FragTrap frag("FRAGGY");

	std::cout << "\n===== Initial Stats =====" << std::endl;
	std::cout << "FRAGGY -> HP:" << frag.getHitPoints() << " | EP:" << frag.getEnergyPoints()
			  << " | AD:" << frag.getAttackDamage() << std::endl;

	std::cout << "\n===== Attacks =====" << std::endl;
	frag.attack("Target Dummy");

	std::cout << "\n===== Taking Damage =====" << std::endl;
	frag.takeDamage(40);

	std::cout << "\n===== Repairing =====" << std::endl;
	frag.beRepaired(25);

	std::cout << "\n===== Special Ability =====" << std::endl;
	frag.highFivesGuys();

	std::cout << "\n===== Final Stats =====" << std::endl;
	std::cout << "FRAGGY -> HP:" << frag.getHitPoints() << " | EP:" << frag.getEnergyPoints()
			  << " | AD:" << frag.getAttackDamage() << std::endl;

	return 0;
}
