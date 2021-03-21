
#include <iostream>
using namespace std;
void pad_right( char *&aPtr, int n)
{
    int len =0;
    for ( int i = 0; i< 1000; i++)
        if ( aPtr[i] != '\0') len ++;
    if ( len <n-1 )
    {
        
        for ( int i=n-len+2; i<n-1; i++)
            aPtr[i] = 'z';
        aPtr[n-1] = '\0';
    }
}

int main()
{
    char a[] = "Hello World";
    char *aPtr = a;
    int n = 20;
    pad_right(aPtr, n);
    cout << aPtr;
    return 0;
}
