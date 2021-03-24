#include <iostream>
using namespace std;

bool is_palindrome(char *& aPtr)
{
    int len =0;
    for ( int i = 0; i< 10; i++)
        if ( aPtr[i] != '\0') len ++;
    int tmp = len;
    for ( int i=0; i<len/2; i++)
    {
        if (aPtr[i] != aPtr[--tmp]) return 0;
    }

    return 1;
}

int main()
{
    char a[10] = "12321";
    char b[10] = "12345";
    char * aPtr = a;
    char * bPtr = b;
    cout << is_palindrome(aPtr) << endl;
    cout << is_palindrome(bPtr) << endl;
    return 0;
}
