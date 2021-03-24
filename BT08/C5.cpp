#include <iostream>
using namespace std;

void truncate( char *& foo_ptr, int n)
{
    int len =0;
    for ( int i = 0; i< 100; i++)
        if ( foo_ptr[i] != '\0') len ++;
    if ( len > n ) foo_ptr[n-1] = '\0';
}
int main()
{
    char  foo[100] = "HELLO WORLD, I'M COMING";
    char * foo_ptr=foo;
    int n = 12;
    truncate ( foo_ptr, n);
    cout << foo_ptr;
    return 0;
}
