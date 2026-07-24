#include<iostream>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while(testcase--){
        int n;  cin >> n;
        if (n % 3 == 0)     cout << "Second";
        else    cout << "First";
        cout << '
';
    }
    return 0;
}