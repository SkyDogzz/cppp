#pragma once

#include <string>

class AAnimal {
public:
	AAnimal();
	AAnimal(const AAnimal& other);
	AAnimal& operator=(const AAnimal& other);
	virtual ~AAnimal() = 0;

protected:
	std::string type;

public:
	const std::string& getType(void) const;
	virtual void makeSound(void) const;
};
