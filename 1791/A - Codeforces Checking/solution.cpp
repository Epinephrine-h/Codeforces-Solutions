#include <iostream>
 
using namespace std;
 
string code = "codeforces";
 
bool check(char c){
    for (char ch : code){
        if (ch == c)    return true;
    }
    return false;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while(testcase--){
        char c; cin >> c;
        if (check(c))       cout << "YES
";
        else    cout << "NO
";
    }
    return 0;
}