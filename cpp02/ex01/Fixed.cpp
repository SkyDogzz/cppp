#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->raw = 0;
}

Fixed::Fixed(const int i) {
	std::cout << "Int constructor called" << std::endl;
	this->raw = i << frac;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	this->raw = roundf(f * (1 << frac));
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	this->raw = fixed.raw;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->raw = fixed.raw;
	return *this;
}

std::ostream &operator<<(std::ostream &ostream, const Fixed &fixed) {
	return ostream << fixed.toFloat();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->raw;
}

void Fixed::setRawBits(int const raw) {
	this->raw = raw;
}

float Fixed::toFloat(void) const {
	return (float)this->raw / (1 << frac);
}

int Fixed::toInt(void) const {
	return this->raw >> this->frac;
}
