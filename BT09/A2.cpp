#include <iostream>
using namespace std;
int main()
{
     int* p = new int;
     int* p2 = p;
     *p = 10;
     delete p; // lỗi giải phóng p quá sớm làm cho p2 trở thành con trỏ vào cùng nhớ không còn hiệu lực
    *p2 = 100;
     cout << *p2;
     delete p2; // p2 không phải con trỏ do cấp phát động

}
