#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " destructor called" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << "Brainzzzzzzzz" << std::endl;
}
