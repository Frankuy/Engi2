#include "Point.h"
#include <iostream>
#include <string>
using namespace std;

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(int _x, int _y) {
    x = _x;
    y = _y;
}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

void Point::setX(int _x) {
    x = _x;
}

void Point::setY(int _y) {
    y = _y;
}

ostream& operator<<(ostream& os, const Point& p) {
    os << "(" << p.x << "," << p.y << ")";
    return os;
}

bool Point::operator==(Point p) {
    return x == p.x && y == p.y;
}

