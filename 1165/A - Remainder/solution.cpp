#include<iostream>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y, ans = 0;    cin >> n >> x >> y;
    string s;   cin >> s;
    for (int i = s.size() - x; i < s.size(); i++){
        if (s[i] == '1')    ans++;
    }
    if (s[s.size() - y - 1] == '1')     ans--;
    else    ans++;
    cout << ans;
    return 0;
}