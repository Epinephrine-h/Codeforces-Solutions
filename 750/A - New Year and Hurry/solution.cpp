#include <iostream>
 
using namespace std;
 
int Answer()
{
    int n, k, ans = 0;   cin >> n >> k;
    k = 240 - k;
    int left = 0, right = n;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (5 * mid * (mid + 1) / 2 <= k){
            ans = mid;
            left = mid + 1;
        } 
        else{
            right = mid - 1;
        }
    }
    return ans;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << Answer();
    return 0;
}