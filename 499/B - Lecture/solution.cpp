#include<iostream>
#include<unordered_map>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;   cin >> n >> m;
    unordered_map<string,string> dictionary;
    for (int i = 0; i < m; i++){
        string x, y;    cin >> x >> y;
        string best = (y.size() < x.size()) ? y:x;
        dictionary[x] = best;
        dictionary[y] = best;
    }
    for (int i =0; i < n; i++){
        string word;    cin >> word;
        cout << dictionary[word] << " ";
    }
    return 0;
}