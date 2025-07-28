#include "Weapon.hpp"

class HumanA {
private:
	std::string name;
	Weapon	   *weapon;

public:
	HumanA(const char *name, Weapon &weapon);
	~HumanA();

	void attack();
};
