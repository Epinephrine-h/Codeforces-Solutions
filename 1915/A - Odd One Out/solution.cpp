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
        int a, b, c;
        cin >> a >> b >> c;
        int ans = a ^ b ^ c;
        cout << ans << '
';
    }
    return 0;
}