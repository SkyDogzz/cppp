#pragma once

#include <iostream>
#include <string>

class Zombie {
private:
	std::string name;

public:
	Zombie();
	~Zombie();

	void announce();
	static Zombie* zombieHorde(int N, std::string name);
};
