#pragma once

#include <iostream>
#include <string>

class Weapon {
private:
	std::string type;

public:
	Weapon(const char* type);
	~Weapon();

	void			   setType(const char* type);
	const std::string& getType() const;
};
