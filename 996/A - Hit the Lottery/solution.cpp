#include<iostream>
#include<cctype>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cnt = 0;
    cin >> n;
    int denominations[5] = {1,5,10,20,100};
    for (int i = 4; i >= 0; i--){
        cnt += n/denominations[i];
        n %= denominations[i];
    }
    cout << cnt;
    return 0;
}