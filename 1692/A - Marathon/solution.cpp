#include <iostream>
using namespace std;
 
void Answer()
{
    int testcase;
    cin >> testcase;
    while(testcase--){
        int a, cnt = 0;  cin >> a;
        for (int i = 0; i < 3; i++){
            int x;
            cin >> x;
            if (x > a)      cnt++;
        }
        cout << cnt << '
';
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Answer();
    return 0;
}