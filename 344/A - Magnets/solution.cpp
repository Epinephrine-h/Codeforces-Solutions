#include<iostream>
 
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cnt = 0;
    cin >> n;
    char sign = 'x';
    while(n--){
        string s;
        cin >> s;
        if (sign == 'x' || sign == s[0]){
            sign = s[1];
            cnt++;
        }
    }
    cout << cnt;
    return 0; 
}