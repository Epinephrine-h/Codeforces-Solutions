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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int total = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (abs(total) == 2)
            {
                total = 0;
                arr[i] = -arr[i];
            }
            total += arr[i];
        }
        if (total == 0)     cout << "YES
";
        else    cout << "NO
";
    }
    return 0;
}