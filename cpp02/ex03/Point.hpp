#include "Fixed.hpp"

class Point {
private:
	Fixed x;
	Fixed y;

public:
	Point();
	Point(const float, const float);
	Point(const Point &);
	Point &operator=(const Point &);
	~Point();

public:
	Fixed getX() const;
	Fixed getY() const;

	static bool bsp(Point a, Point b, Point c, Point point);
};
