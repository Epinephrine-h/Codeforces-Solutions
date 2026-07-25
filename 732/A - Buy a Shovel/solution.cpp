#include <iostream>
 
using namespace std;
 
int Answer()
{
    int k, r, ans = 1;
    cin >> k >> r;
    while (true){
        int cost = ans * k;
        if (cost % 10 == 0 || (cost - r) % 10 == 0)     return ans;
        ans++;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << Answer();
    return 0;
}