#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(std::string);
	ScavTrap(const ScavTrap &);
	ScavTrap &operator=(const ScavTrap &);
	~ScavTrap();

	void attack(const std::string &);
	void guardGate();

private:
};
