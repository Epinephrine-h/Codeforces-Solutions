#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while(testcase--){
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            sum += x;
        }
        if (sum % 2 == 0)       cout << "YES
";
        else    cout << "NO
";
    }
    return 0;
}