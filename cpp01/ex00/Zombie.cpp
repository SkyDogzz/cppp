#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	std::cout << "Zombie " << name << " constructor called" << std::endl;
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << name << " destructor called" << std::endl;
}

void Zombie::announce() {
	std::cout << this->name << " Brainzzzzzzz..." << std::endl;
}
