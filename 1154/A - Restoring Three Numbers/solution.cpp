#include <iostream>
#include<algorithm>
 
using namespace std;
 
void Answer()
{
    int x[4];
    for (int& i : x)    cin >> i;
    sort(x, x + 4);
    for (int i = 0; i < 3; i++)     cout << x[3] - x[i] << " "; 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Answer();
    return 0;
}