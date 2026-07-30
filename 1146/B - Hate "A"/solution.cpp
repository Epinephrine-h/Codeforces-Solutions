#include<iostream>
 
using namespace std;
 
string removedString(const string& s){
    string ans = "";
    for (char ch : s){
        if (ch != 'a')      ans += ch;
    }
    return ans;
}
 
string check(const string& t){
    string leftString = removedString(t), rightString = "";
    int ptr = t.size() - 1;
    while(ptr >= 0 && t[ptr] != 'a'){
        if (leftString == rightString){
            string ans = "";
            for (int i = 0; i <= ptr; i++)      ans += t[i];
            return ans;
        }
        rightString = string(1,t[ptr]) + rightString;
        leftString.pop_back();
        ptr--;
    }
    if (leftString == rightString){
        string ans = "";
        for (int i = 0; i <= ptr; i++)      ans += t[i];
        return ans;
    }
    return ":(";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string t;   cin >> t;
    cout << check(t);
    return 0;
}