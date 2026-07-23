#include<iostream>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while(testcase--){
        int x, y, z, sum = 0;
        cin >> x >> y >> z;
        sum = x + y + z;
        if (x == sum - x || y == sum - y || z == sum - z){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        cout << '
';
    }
    return 0;
}