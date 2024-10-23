#include <iostream>

class Point {
private:
    int x ;
    int y ;
    int cnt;
public:
    Point(int, int);
    Point(const Point&);
    ~Point();
    int getX();
    int getY();
    void setX(int);
    void setY(int);
    void show();
    friend Point operator+(Point &, Point &);
    friend std::iostream& operator<<(Point &, Point &);
    const Point operator ++ (int);
    Point operator ++ ();
    Point operator + (const Point & , const Point &);
    bool operator == (const Point &,const Point&);
};
