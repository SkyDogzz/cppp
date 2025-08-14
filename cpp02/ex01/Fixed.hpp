#include <iostream>
#include <cmath>

class Fixed {
private:
	int				 raw;
	static int const frac = 8;

public:
	Fixed();
	Fixed(int const);
	Fixed(float const);
	Fixed(const Fixed &);
	Fixed &operator=(const Fixed &);
	~Fixed();

public:
	int	 getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int	  toInt(void) const;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed &);
