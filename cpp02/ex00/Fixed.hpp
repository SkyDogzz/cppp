#include <iostream>

class Fixed {
private:
	int				 raw;
	static const int frac = 8;

public:
	Fixed();
	Fixed(const Fixed &);
	Fixed &operator=(const Fixed &);
	~Fixed();

public:
	int	 getRawBits(void) const;
	void setRawBits(int const raw);
};
