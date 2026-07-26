#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
bool check(){
    int n, k;  cin >> n >> k;
    vector<int> towers(n+1);
    for (int i = 1; i <= n; i++)       cin >> towers[i];
    int you = towers[k];
    sort(towers.begin(), towers.end());
    int waterLevel = 0;
    for (int i = 1; i <= n; i++){
        if (towers[i] > you){
            if (towers[i] - you > you - waterLevel)     return false;
            waterLevel += (towers[i] - you);
            you = towers[i];
        }
    }
    return true;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while(testcase--){
        if (check())    cout << "YES
";
        else    cout << "NO
";
    }
    return 0;
}