#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = Zombie::zombieHorde(10, "Michael");

	delete []horde;
}
