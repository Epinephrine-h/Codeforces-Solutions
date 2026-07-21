#include<iostream>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int res = 0, quantity = 0;
    while(n--){
        int exit, abroad;
        cin >> exit >> abroad;
        quantity += (abroad - exit);
        res = max(res, quantity);
    }
    cout << res;
    return 0; 
}