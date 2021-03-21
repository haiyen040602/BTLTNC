#include <iostream>
using namespace std;

int main() {
    char *s;
    char foo[] = "Hello World";
    s = foo;
    cout << "s is " << s << endl;
    s = &foo[0];
    cout << "s[0] is " << *s << endl;
    return 0;
    }
