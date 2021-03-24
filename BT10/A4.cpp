#include <iostream>
using namespace std;

struct Point{
    int x, y;
    Point(int _x, int _y) { x=_x; y =_y;};
    void print ()
    {
        cout << &x << endl << &y << endl;

    }

};

int main()
{
    Point x(3,4);
    cout << &x << endl;
    x.print();
    return 0;
}
 /** trường x có địa chỉ giống với địa chỉ biến x, còn trường y
 có địa chỉ cách trường x 4 byte  **/
