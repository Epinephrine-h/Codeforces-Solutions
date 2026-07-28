#include<iostream>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while(testcase--){
        int n, k;   cin >> n >> k;
        int even_count = 0, ans = k;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            if (x % 2 == 0)     even_count++;
            int tmp = (k - (x % k)) % k;
            ans = min(tmp, ans);
        }
        if (k == 4){
            if (even_count >= 2)    ans = min(0, ans);
            else if (even_count == 1)   ans = min(1,ans);
            else    ans = min(2, ans);
        }
        cout << ans << '
';
    }
}