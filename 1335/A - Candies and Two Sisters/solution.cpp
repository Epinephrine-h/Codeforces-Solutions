#include<iostream>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while(testcase--){
        int n;
        cin >> n;
        if (n <= 2){
            cout << 0;
        }
        else{
            cout << n - n / 2 - 1;
        }
        cout << '
';
    }
    return 0;
}