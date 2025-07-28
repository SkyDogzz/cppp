#include "Zombie.hpp"

int main(void) {
	Zombie pierre = Zombie("Pierre");
	pierre.announce();

	Zombie *paul = Zombie::newZombie("Paul");
	paul->announce();
	delete paul;

	Zombie::randomChump("Jacques");
}
