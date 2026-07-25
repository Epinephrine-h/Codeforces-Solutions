#include <iostream>
#include<algorithm>
 
using namespace std;
 
void Answer()
{
    int testcase;
    cin >> testcase;
    while(testcase--){
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)     cout << "+
";
        else    cout << "-
";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Answer();
    return 0;
}