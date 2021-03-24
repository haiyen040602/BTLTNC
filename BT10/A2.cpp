#include <iostream>
using namespace std;

struct Point{
    int x, y;
    Point(int _x, int _y) { x=_x; y =_y;};
};
void print1 ( Point x)
{
    cout << &x;
}
void print2 ( Point &x)
{
    cout << &x;
}

int main()
{
    Point x(3,4);
    cout << &x << endl;
    print1 (x);
    cout << endl;
    print2 (x);
    return 0;
}
