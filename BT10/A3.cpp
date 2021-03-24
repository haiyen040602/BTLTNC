#include <iostream>
using namespace std;

struct Point{
    int x, y;
    Point () {};
    Point(int _x, int _y) { x=_x; y =_y;};
    void print ()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
    Point mid_point ( Point other) const
    {
        Point mid;
        mid.x = (x + other.x)*1/2;
        mid.y = (y + other.y)*1/2;
        return mid;
    }

};


int main()
{
     Point x(1,2);
     Point y(3,4);
    x.print();
    y.print();
    Point mid = x.mid_point(y);
    mid.print();
    return 0;
}
