#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while(testcase--){
        vector<int> ans;
        int n, pow = 1;
        cin >> n;
        for (int i = 0; i < 5; i++){
            if (n  == 0)    break;
            int x = n % 10;
            n /= 10;
            if (x != 0)     ans.push_back(pow * x);
            pow *= 10;
        }
        cout << ans.size() << '
';
        for (int i : ans)       cout << i << " ";
        cout << '
';
    }
    return 0;
}