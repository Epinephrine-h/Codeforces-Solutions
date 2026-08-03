#include<iostream>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;   cin >> n >> m;
    int max_init = 0, sum = m;
    for (int i = 0; i < n; i++){
        int x;  cin >> x;
        max_init = max(max_init, x);
        sum += x;
    }
    cout << max((sum + n - 1)/n, max_init) << " " << max_init + m ;
    return 0;
}