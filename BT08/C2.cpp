#include <iostream>
using namespace std;

void delete_char( char *&foo_ptr, char c)
{
    int len =0;
    for ( int i = 0; i< 1000; i++)
        if ( foo_ptr[i] != '\0') len ++;
    for (int i =0; i< len; i++)
    {

        if ( foo_ptr[i] == c )
        {
            for (int j =i ; j<len; j++)
            {
                foo_ptr[j] = foo_ptr[j+1];

            }
            foo_ptr[len-1] = '\0';
        }
        if ( i>0 && foo_ptr[i] == c) --i;

    }

}

int main()
{
    char foo[] = "Hellzo zWorldzz";
    char *foo_ptr = foo;
    char c = 'z';
    delete_char (foo_ptr, c);
    cout << foo_ptr;
    return 0;
}
