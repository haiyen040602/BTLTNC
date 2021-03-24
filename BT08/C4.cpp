#include <iostream>
using namespace std;

void pad_left ( char *& foo_ptr, int n)
{
    int len =0;
    for ( int i = 0; i< 100; i++)
        if ( foo_ptr[i] != '\0') len ++;
    int tmp = len;
    if ( tmp < n-1 )
    {

        for (int i = n-2; i>= n-len-1; i--)
        {
           foo_ptr[i] = foo_ptr[--tmp];
           foo_ptr[tmp] = '0';
        }
    }
}

int main()
{
    char foo[100] = "Hello World";
    char *foo_ptr = foo;
    int n = 20;
    pad_left (foo_ptr, n);
    cout << foo_ptr;
    return 0;
}
