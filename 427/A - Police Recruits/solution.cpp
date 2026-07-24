#include<iostream>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;  cin >> n;
    int cnt = 0, ans = 0;
    for (int i = 0; i < n; i++){
        int x;  cin >> x;
        cnt += x;
        if (cnt < 0){
            ans -= cnt;  cnt = 0;
        }      
    }
    cout << ans;
    return 0;
}