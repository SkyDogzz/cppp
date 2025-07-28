#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name) {
	Zombie* p = new Zombie(name);
	return p;
}
