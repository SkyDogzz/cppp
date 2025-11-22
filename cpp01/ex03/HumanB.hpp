#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>

#include "Weapon.hpp"

class HumanB {
private:
	std::string _name;
	Weapon*		_weapon;

public:
	explicit HumanB(std::string const &name);

	void attack() const;
	void setWeapon(Weapon &weapon);
};

#endif
