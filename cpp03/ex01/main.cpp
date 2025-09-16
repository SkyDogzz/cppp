#include <iostream>

#include "ScavTrap.hpp"

int main() {
	std::cout << "===== Constructing ScavTrap =====" << std::endl;
	ScavTrap scav("SCAVY");

	std::cout << "\n===== Initial Stats =====" << std::endl;
	std::cout << "SCAVY -> HP:" << scav.getHitPoints() << " | EP:" << scav.getEnergyPoints()
			  << " | AD:" << scav.getAttackDamage() << std::endl;

	std::cout << "\n===== Attacks =====" << std::endl;
	scav.attack("Dummy");

	std::cout << "\n===== Taking Damage =====" << std::endl;
	scav.takeDamage(20);

	std::cout << "\n===== Repairing =====" << std::endl;
	scav.beRepaired(10);

	std::cout << "\n===== Special Ability =====" << std::endl;
	scav.guardGate();

	std::cout << "\n===== Final Stats =====" << std::endl;
	std::cout << "SCAVY -> HP:" << scav.getHitPoints() << " | EP:" << scav.getEnergyPoints()
			  << " | AD:" << scav.getAttackDamage() << std::endl;

	return 0;
}
