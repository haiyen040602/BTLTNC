#include <iostream>
using namespace std;

char * reverse (const char foo[])
{
    char * foo_ptr = new char [20];
    int len = 0;

    for (int i=0; i< 20; i++)
    {
        if (foo[i] != '\0' ) {len++; foo_ptr[i] = foo[i]; };
    }
    foo_ptr[len] = '\0';
    for (int i=0; i< len; i++)
    {
        --len;
        char tmp = foo_ptr[i];
        foo_ptr[i] = foo_ptr[len];
        foo_ptr[len] = tmp;

    }
    return foo_ptr;

}

int main()
{
    const char foo[20] = "U EVOL I";
    cout <<  reverse(foo);


    return 0;
}
