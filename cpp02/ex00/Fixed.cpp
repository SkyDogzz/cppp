#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Fixed constructor called" << std::endl;
	this->raw = 0;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Fixed copy constructor called" << std::endl;
	this->raw = fixed.raw;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Fixed assignement operator called" << std::endl;
	this->raw = fixed.raw;
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Fixed destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits Fixed method called" << std::endl;
	return this->raw;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits Fixed method called" << std::endl;
	this->raw = raw;
}
