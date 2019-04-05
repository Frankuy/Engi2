#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <string>
using namespace std;
class Point {
    private:
        int x;
        int y;
    public:
        Point(); //DEFAULT 0,0
        Point(int, int); //User Defined

        //GETTER AND SETTER
        int getX() const;
        int getY() const;
        void setX(int);
        void setY(int);

        //COUT OPERATOR
        friend ostream& operator<<(ostream& os, const Point& p);

        //Equal Operator
        bool operator==(Point p);
};
#endif