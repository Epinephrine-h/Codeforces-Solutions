#include <iostream>
 
using namespace std;
 
int Answer()
{
    int k, r;
    cin >> k >> r;
    for (int i = 1; i <= 10; i++){
        int cost = i * k;
        if (cost % 10 == 0 || cost % 10 == r)   return i;
    }
    return 10;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << Answer();
    return 0;
}