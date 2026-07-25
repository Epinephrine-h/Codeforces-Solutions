#include <iostream>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, res = 0, cnt = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
                cnt++;
            else
            {
                res = max(res, cnt);
                cnt = 0;
            }
        }
        cout << max(res, cnt) << '
';
    }
    return 0;
}