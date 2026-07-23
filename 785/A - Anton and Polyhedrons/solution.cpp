#include<iostream>
using namespace std;
 
void solve(){
    int n, res = 0;  cin >> n;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        if (s == "Tetrahedron")     res += 4;
        else if (s == "Cube")       res += 6;
        else if (s == "Octahedron")     res += 8;
        else if (s == "Dodecahedron")       res += 12;
        else    res += 20;
    }
    cout << res;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}