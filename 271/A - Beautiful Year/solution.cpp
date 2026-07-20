#include<iostream>
 
using namespace std;
 
bool check(int n){
    bool visited[10] = {false};
    while(n){
        if (visited[n % 10]){
            return false;
        }
        visited[n % 10] = true;
        n /= 10;
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