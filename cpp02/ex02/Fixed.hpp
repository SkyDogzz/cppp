#include <cmath>
#include <iostream>

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

	Fixed &operator++();
	Fixed &operator--();

	Fixed operator++(int);
	Fixed operator--(int);

public:
	int	 getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int	  toInt(void) const;

	static Fixed max(const Fixed &, const Fixed &);
};

std::ostream &operator<<(std::ostream &ostream, const Fixed &);

bool operator>(const Fixed &, const Fixed &);
bool operator<(const Fixed &, const Fixed &);
bool operator>=(const Fixed &, const Fixed &);
bool operator<=(const Fixed &, const Fixed &);
bool operator==(const Fixed &, const Fixed &);
bool operator!=(const Fixed &, const Fixed &);

Fixed operator+(const Fixed &, const Fixed &);
Fixed operator-(const Fixed &, const Fixed &);
Fixed operator*(const Fixed &, const Fixed &);
Fixed operator/(const Fixed &, const Fixed &);
