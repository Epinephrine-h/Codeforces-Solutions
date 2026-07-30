#include<iostream>
#include<set>
 
using namespace std;
 
void solve(){
    long long n, k; cin >> n >> k;
    if (n < k){
        cout << - 1 << '
';
        return;
    }
    if (n == k){
        cout << 0 << '
';
        return;
    }
    set<long long> current_lengths = {n};
    long long step = 0;
    while(!current_lengths.empty()){
        step++;
        set<long long> next_lengths;
        for (long long len : current_lengths){
            if (len < k)    continue;
            long long first = len / 2;
            long long second = len - first;
            if (first == k || second == k){
                cout << step << '
';
                return;
            }
            next_lengths.insert(first);
            next_lengths.insert(second);          
        }
        current_lengths = move(next_lengths);
    }
    cout << -1 << '
';
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;   cin >> testcase;
    while(testcase--){
        solve();
    }
    return 0;
}