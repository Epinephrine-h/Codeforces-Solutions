#include<iostream>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;    cin >> n >> a >> b;
    cout << min(b + 1, n - a);
    return 0;
}