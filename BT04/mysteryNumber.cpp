#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector <int> arr1;
    vector <int> arr2;
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
        int y;
        cin >> y;
        arr2.push_back(y);
        if ( i == n-1 ) cin >> y;
        arr2.push_back(y);

    }
    arr1.sort(arr1.begin(), arr1.end());
    arr2.sort(arr2.begin(), arr2.end());
    for (int i=0; i< arr1.size)



    return 0;
}
