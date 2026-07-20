#include<iostream>
 
using namespace std;
 
bool check(const string& s, const string& t){
    if (s.size() != t.size())       return false;
    int l = 0;
    while (l < s.size()){
        if (s[l] != t[t.size() - l - 1])    return false;
        l++;
    }
    return true;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;    cin >> s >> t;
    if (check(s, t))    cout << "YES";
    else    cout << "NO";
    return 0; 
}