#include<iostream>
#include<cctype>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    int cnt = 0;
    while(n){
        int x = n % 10;
        if (x == 7 || x == 4)   cnt++;
        n /= 10;
    }
    if (cnt == 7 || cnt == 4){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0; 
}