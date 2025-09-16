#include <iostream>

#include "ClapTrap.hpp"

int main() {
	std::cout << "===== Constructing ClapTraps =====" << std::endl;
	ClapTrap clap1("CLAPPY");
	ClapTrap clap2("BOOMY");

	std::cout << "\n===== Initial Stats =====" << std::endl;
	std::cout << "CLAPPY -> HP:" << clap1.getHitPoints() << " | EP:" << clap1.getEnergyPoints()
			  << " | AD:" << clap1.getAttackDamage() << std::endl;
	std::cout << "BOOMY  -> HP:" << clap2.getHitPoints() << " | EP:" << clap2.getEnergyPoints()
			  << " | AD:" << clap2.getAttackDamage() << std::endl;

	std::cout << "\n===== Attacks =====" << std::endl;
	clap1.attack("BOOMY");
	clap2.attack("CLAPPY");

	std::cout << "\n===== Taking Damage =====" << std::endl;
	clap1.takeDamage(5);
	clap2.takeDamage(8);

	std::cout << "\n===== Repairing =====" << std::endl;
	clap1.beRepaired(3);
	clap2.beRepaired(5);

	std::cout << "\n===== Final Stats =====" << std::endl;
	std::cout << "CLAPPY -> HP:" << clap1.getHitPoints() << " | EP:" << clap1.getEnergyPoints()
			  << " | AD:" << clap1.getAttackDamage() << std::endl;
	std::cout << "BOOMY  -> HP:" << clap2.getHitPoints() << " | EP:" << clap2.getEnergyPoints()
			  << " | AD:" << clap2.getAttackDamage() << std::endl;

	return 0;
}
