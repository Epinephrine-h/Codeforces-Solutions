#include<iostream>
 
using namespace std;
 
bool check(int n){
    int d[10] = {0};
    while(n){
        d[n % 10]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++){
        if (d[i] > 1)       return false;
    }
    return true;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while(true){
        n++;
        if (check(n)){
            cout << n;
            break;
        }
    }
    return 0; 
}