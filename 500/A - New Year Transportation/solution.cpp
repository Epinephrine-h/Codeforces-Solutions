#include <iostream>
#include<vector>
 
using namespace std;
 
void check(){
    int n, t;  cin >> n >> t;
    vector<int> cells(n+1);
    for (int i = 1; i < n; i++)    cin >> cells[i];
    int curr = 1;
    while(curr < t)     curr += cells[curr];
    if (curr == t)      cout << "YES";
    else    cout << "NO";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    check();
    return 0;
}