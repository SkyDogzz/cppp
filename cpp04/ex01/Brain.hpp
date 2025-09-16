#pragma once

#include <string>

#define IDEA_NUMBERS 100

class Brain {
public:
	Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	~Brain();

protected:
	std::string ideas[IDEA_NUMBERS];
};
