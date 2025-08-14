#include "Fixed.hpp"

Fixed::Fixed() {
	this->raw = 0;
}

Fixed::Fixed(const int i) {
	this->raw = i << frac;
}

Fixed::Fixed(const float f) {
	this->raw = roundf(f * (1 << frac));
}

Fixed::Fixed(const Fixed &fixed) {
	this->raw = fixed.raw;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	this->raw = fixed.raw;
	return *this;
}

Fixed::~Fixed() {}

Fixed &Fixed::operator++() {
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	this->setRawBits(getRawBits() + 1);
	return temp;
}

Fixed &Fixed::operator--() {
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	this->setRawBits(getRawBits() - 1);
	return temp;
}

std::ostream &operator<<(std::ostream &ostream, const Fixed &fixed) {
	return ostream << fixed.toFloat();
}

bool operator>(const Fixed &a, const Fixed &b) {
	return (a.toFloat() > b.toFloat());
}

bool operator<(const Fixed &a, const Fixed &b) {
	return (a.toFloat() < b.toFloat());
}

bool operator>=(const Fixed &a, const Fixed &b) {
	return (a.toFloat() >= b.toFloat());
}

bool operator<=(const Fixed &a, const Fixed &b) {
	return (a.toFloat() <= b.toFloat());
}

bool operator==(const Fixed &a, const Fixed &b) {
	return (a.toFloat() == b.toFloat());
}

bool operator!=(const Fixed &a, const Fixed &b) {
	return (a.toFloat() != b.toFloat());
}

Fixed operator+(const Fixed &f1, const Fixed &f2) {
	return (f1.toFloat() + f2.toFloat());
}

Fixed operator-(const Fixed &f1, const Fixed &f2) {
	return (f1.toFloat() - f2.toFloat());
}

Fixed operator*(const Fixed &f1, const Fixed &f2) {
	return (f1.toFloat() * f2.toFloat());
}

Fixed operator/(const Fixed &f1, const Fixed &f2) {
	return (f1.toFloat() / f2.toFloat());
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

Fixed Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}
