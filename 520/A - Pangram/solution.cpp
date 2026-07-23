#include<iostream>
#include<cctype>
 
using namespace std;
 
bool checkPangram(const string& s){
    bool c[26] = {false};
    for (char i : s){
        c[tolower(i) - 'a'] = true;
    }
    for (int i = 0; i < 26; i++){
        if (!c[i])      return false;
    }
    return true;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (checkPangram(s))    cout << "YES";
    else    cout << "NO";
    return 0;
}