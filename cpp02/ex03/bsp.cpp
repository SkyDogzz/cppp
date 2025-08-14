#include "Point.hpp"

static Fixed area(const Point a, const Point b, const Point c) {
	Fixed res = a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY());
	if (res < Fixed(0))
		res = res * Fixed(-1);
	return res / Fixed(2);
}

bool Point::bsp(Point a, Point b, Point c, Point point) {
	Fixed A = area(a, b, c);
	Fixed A1 = area(point, b, c);
	Fixed A2 = area(a, point, c);
	Fixed A3 = area(a, b, point);

	return (A == A1 + A2 + A3);
}
