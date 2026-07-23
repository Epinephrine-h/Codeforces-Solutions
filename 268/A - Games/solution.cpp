#include<iostream>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cnt = 0;
    cin >> n;
    int team[n][2];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2; j++)     cin >> team[i][j];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j == i)     continue;
            if (team[i][0] == team[j][1])   cnt++;
        }
    }
    cout << cnt;
    return 0;
}