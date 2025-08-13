#include <iostream>
#include <string>

struct HarlCor {
	std::string level;
	void (*fn)();
};

class Harl {
private:
	static void debug(void);
	static void info(void);
	static void warning(void);
	static void error(void);

public:
	static void complain(std::string level);
};
