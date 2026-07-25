#include <iostream>
#include<algorithm>
 
using namespace std;
 
bool check(){
    int n; cin >> n;
    int a[n];
    for (int& i : a)    cin >> i;
    sort(a, a + n);
    for (int i = 1; i < n; i++){
        if (a[i] - a[i - 1] > 1)    return false;
    }
    return true;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        if (check())        cout << "YES
";
        else    cout << "NO
";
    }
    return 0;
}