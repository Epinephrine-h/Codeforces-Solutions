#include<iostream>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;  cin >> n;
    int max_value = 0, min_value = 1e7, min_i = -1, max_i = -1;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x <= min_value){
            min_i = i;
            min_value = x;
        }
        if (x > max_value){
            max_i = i;
            max_value = x;
        }
    }
    if (min_i < max_i)      cout << n - min_i + max_i - 2;
    else    cout << max_i + n - 1 - min_i;
    return 0;
}