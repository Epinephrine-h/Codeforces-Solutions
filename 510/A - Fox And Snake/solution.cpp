#include<iostream>
using namespace std;
 
void solve(){
    int n, m;   cin >> n >> m;
    bool first = false;
    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            for (int j = 0; j < m; j++)     cout << '#';
            cout << '
';
        }
        else{
            if (first){
                cout << '#';
                for (int j = 1; j < m; j++)     cout << '.';
                cout << '
';
                first = false;
            }
            else{
                for (int j = 0; j < m- 1; j++)      cout << '.';
                cout << '#' << '
';
                first = true; 
            }
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}