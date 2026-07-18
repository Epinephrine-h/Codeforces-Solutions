#include<iostream>
using namespace std;
int main(){
    int testcase;
    cin >> testcase;
    while(testcase--){
        string s;
        cin >> s;
        if (s.size() > 10)      cout << s[0] << s.size() - 2 << s[s.size()-1] << '
';
        else    cout << s << '
';
    }
    return 0;
}