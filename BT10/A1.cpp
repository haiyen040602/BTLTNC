#include <iostream>
using namespace std;

struct Point{
    int x, y;
    Point(int _x, int _y) { x=_x; y =_y;};
    void print ()
    {
        cout << "(" << x << "," << y << ")";
    }

};

int main()
{
    Point x(3,4);
    x.print();
    return 0;
}
