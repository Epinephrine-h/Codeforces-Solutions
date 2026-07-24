#include<iostream>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, z;    cin >> x >> y >> z;
    cout << max(x, max(y, z)) - min(x, min(y, z));
    return 0;
}