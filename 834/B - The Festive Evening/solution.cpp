#include<iostream>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;   cin >> n >> k;
    int d[26] = {0};
    bool open[26] = {false};
    string s;   cin >> s;
    for (const char& c : s)     d[c-'A']++;
    int stillOpened = 0;
    for (const char& c : s){
        open[c-'A'] = true;
        d[c-'A']--;
        int cnt = 0;
        for (int i = 0; i < 26; i++)        if (open[i])    cnt++;
        if (cnt > k){
            cout << "YES
";
            return 0;
        }
        if (d[c-'A'] == 0)      open[c-'A'] = false;
    }
    cout << "NO
";
    return 0;
}