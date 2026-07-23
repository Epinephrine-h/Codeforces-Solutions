#include<iostream>
#include<vector>
 
using namespace std;
 
void solve(){
    int k, l, n, m, d, cnt = 0;  cin >> k >> l >> n >> m >> d;
    vector<bool> mark(d+1, false);
    int can[4] = {k, l, n, m};
    for (int i = 0; i < 4; i++){
        for (int j = can[i]; j <= d; j += can[i]){
            mark[j] = true;
        }
    }
    for (int i = 1; i <= d; i++){
        if (mark[i])       cnt++;
    }
    cout << cnt;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}