#include <iostream>
using namespace std;


void reverse (char *& foo_ptr)
{
    int len = 0;
    for (int i=0; i< 20; i++)
    {
        if (foo_ptr[i] != '\0' ) {len++;}
    }

    for (int i=0; i< len; i++)
    {
        --len;
        char tmp = foo_ptr[i];
        foo_ptr[i] = foo_ptr[len];
        foo_ptr[len] = tmp;

    }

}

int main()
{
    char foo[20] = "U EVOL I";
    char * foo_ptr = foo;
    reverse(foo_ptr);
    cout << foo_ptr;

    return 0;
}
