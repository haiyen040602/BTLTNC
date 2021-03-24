#include <iostream>
#include <cstring>
using  namespace std;

struct STRING {
    int n;
    char *str;
    STRING (){};
    STRING (int _n)
    {
        n = _n;
        str = new char  [n];
    }
    STRING ( const char * default_value)
    {
        int len = strlen(default_value);
        str = new char  [len];
        for (int i=0; i<len; i++)  str[i] = default_value[i];
    }
    ~STRING()
    {
        delete [] str;
    }
    void print ()
    {
        cout << str << endl;
    }
    STRING append( const char * string1)
    {
        STRING appendedString;
        n+=strlen(string1);
        appendedString = strcat(str, string1);
        return appendedString;
    }
};

int main()
{
    STRING str1 ("Hello");
    str1.print();
    STRING appendedString = str1.append(" There");
    appendedString.print();
    return 0;
}
