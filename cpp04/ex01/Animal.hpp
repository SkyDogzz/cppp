#pragma once

#include <string>

class Animal {
public:
	Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	virtual ~Animal();

protected:
	std::string type;

public:
	const std::string& getType(void) const;
	virtual void makeSound(void) const;
};
