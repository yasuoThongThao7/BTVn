#include "Point.h"
Point::Point(int = 0, int = 0) : x(x), y(x) {
}

Point Point::operator++() {
     ++this->x;
     ++this->y;
    return *this;
}
const Point Point::operator++(int) {
     Point temp = *this;
    this->x = x++;
    this->y++;
    return temp;
}

Point Point::operator+(const Point & p1, const Point & p2) {
     Point point(p1.x+p2.x, p1.y+p2.y);
     return point;
}
 bool Point::operator == (const Point & p1 ,const Point & p2)  {
    return p1.x == p2.x && p1.y == p2.y; ;
}

