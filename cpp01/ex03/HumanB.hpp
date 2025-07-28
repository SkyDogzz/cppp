#include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon	   *weapon;

public:
	HumanB(const char *name);
	~HumanB();

	void attack();
	void setWeapon(Weapon& weapon);
};
