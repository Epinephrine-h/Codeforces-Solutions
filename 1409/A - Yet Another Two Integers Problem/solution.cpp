#include <iostream>
#include<algorithm>
 
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b;
        cin >> a >> b;
        b = abs(b - a);
        if (b % 10 == 0)        cout << b / 10 << '
';
        else    cout << b / 10 + 1 << '
';
    }
    return 0;
}