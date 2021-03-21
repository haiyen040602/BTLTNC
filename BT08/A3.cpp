#include <iostream>
using namespace std;


void swap_pointers(char* &x, char* &y)
{
    char *tmp;
    tmp = x;
    x = y;
    y = tmp;
}
int main()
{
    char a[] = "I should print second";
    char b[] = "I should print first";
    char *s1 = a;
    char *s2 = b;
    swap_pointers(s1,s2);
    cout << "s1 is " << s1 << endl;
    cout << "s2 is " << s2 << endl;
    return 0;
}

/**
void swap_pointers(char* x, char* y)  hàm swap_pointers(s1,s2) chỉ đơi
{
    char *tmp;
    tmp = x;
    x = y;
    y = tmp;
}
 hàm swap_pointers(s1,s2) chỉ đơn giản truyền vào hàm mảng char
 không khác so với truyền giá trị nên sẽ ko thay đổi được giá trị của tham sô khi kết thúc hàm
**/
