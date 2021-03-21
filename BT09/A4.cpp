#include <iostream>
using namespace std;
int main()
{
    int a =10;
    int *aPtr = new int;
    aPtr = &a;
    delete aPtr;
    cout << &a << endl;
    cout << aPtr;
    return 0;

}

/**
mặc dù đã giải phóng aPtr nhưng còn trỏ vẫn trỏ vào địa chỉ đó, sử dụng
toán tử * có thể gây lỗi
**/
