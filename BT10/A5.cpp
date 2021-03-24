#include <iostream>
using namespace std;

struct Point {
    int x; int y;
    Point (){};
    Point (int _x, int _y)
    {
        x= _x;
        y=_y;
    }
    void print ()
    {
        cout << "(" << x << "," << y << ")";
    }

};

int main()
{
    Point x  (1,2);
    Point y = x;
    y.print();
    return 0;
}
