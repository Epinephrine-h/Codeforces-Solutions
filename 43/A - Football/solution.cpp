#include <iostream>
#include<unordered_map>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;  cin >> n;
    unordered_map<string,int> team;
    for (int i = 0; i < n; i++){
        string s;   cin >> s;
        team[s]++;
    }
    string ans;
    int record = 0;
    for (auto i : team){
        if (i.second > record){
            record = i.second;
            ans = i.first;
        }
    }
    cout << ans;
    return 0;
}