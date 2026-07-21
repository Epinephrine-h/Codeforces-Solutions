#include<iostream>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t;
    cin >> n >> t;
    char s[n];
    for (int i = 0; i < n; i++)     cin >> s[i];
    while(t--){
        int i = 0;
        while(i < n - 1){
            if (s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i],s[i+1]);
                i++;
            }
            i++;
        }
    }
    cout << s;
    return 0;
}