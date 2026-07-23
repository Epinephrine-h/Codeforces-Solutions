#include<iostream>
using namespace std;
 
void solve(){
    int n, m;   cin >> n >> m;
    bool first = false;
    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            cout << string(m, '#') << '
';
        }
        else if (i % 4 == 1)        cout << string(m-1,'.') << '#' << '
';
        else    cout << '#' << string(m-1, '.') << '
';
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}