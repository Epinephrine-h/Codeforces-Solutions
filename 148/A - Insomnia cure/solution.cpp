#include<iostream>
using namespace std;
 
void solve(){
    int k, l, n, m, d, cnt = 0;  cin >> k >> l >> n >> m >> d;
    for (int i = 1; i <= d; i++){
        if (i % k == 0 || i % l == 0 || i % n == 0 || i % m == 0)   cnt++;
    }
    cout << cnt;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}