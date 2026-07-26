#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while(testcase--){
        int n;  cin >> n;
        string s;   cin >> s;
        vector<int> gain;
        long long ans = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == 'L'){
                ans += i;
                if (n - 2*i - 1 > 0)   gain.push_back(n - 2*i - 1);
            }
            else{
                ans += (n - i - 1);
                if (2*i - n + 1 > 0)      gain.push_back(2*i - n + 1);
            }
        }
        sort(gain.begin(), gain.end(), greater<int>());
        for (int i = 0; i < gain.size(); i++){
            ans += gain[i];
            cout << ans << " ";
        }
        for (int i = gain.size(); i < n; i++)   cout << ans << " ";
        cout <<'
';
    }
    return 0;
}