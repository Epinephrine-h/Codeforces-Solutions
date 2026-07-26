#include <iostream>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;   cin  >> testcase;
    while(testcase--){
        int n, cnt = 0;  cin >> n;
        string s;   cin >> s;
        for (const char& c : s){
            if (c == '(')   cnt++;
            else{
                if (cnt > 0)       cnt--;
            }
        }
        cout << cnt << '
';
    }
    return 0;
}