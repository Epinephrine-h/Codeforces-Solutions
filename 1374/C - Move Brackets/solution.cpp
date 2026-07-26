#include <iostream>
#include<stack>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;   cin  >> testcase;
    while(testcase--){
        stack<char> openBracket;
        int n;  cin >> n;
        string s;   cin >> s;
        for (const char& c : s){
            if (c == '(')   openBracket.push(c);
            else{
                if (!openBracket.empty())       openBracket.pop();
            }
        }
        cout << openBracket.size() << '
';
    }
    return 0;
}