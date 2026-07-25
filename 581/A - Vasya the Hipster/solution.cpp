#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    if (a < b)
    {
        cout << a << " " << (b - a) / 2;
    }
    else
        cout << b << " " << (a - b) / 2;
    return 0;
}