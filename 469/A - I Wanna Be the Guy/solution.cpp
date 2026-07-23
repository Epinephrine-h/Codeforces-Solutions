#include<iostream>
#include<cctype>
 
using namespace std;
 
bool check(){
    int n;
    cin >> n;
    bool d[n + 1] = {false};
    int p;  cin >> p;
    for (int i = 0; i < p; i++){
        int x;
        cin >> x;
        d[x] = true;
    }
    int q;  cin >> q;
    for (int i = 0; i < q; i++){
        int x;
        cin >> x;
        d[x] = true;
    }
    for (int i = 1; i <= n; i++){
        if (!d[i])      return false;
    }
    return true;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (check())        cout << "I become the guy.";
    else    cout << "Oh, my keyboard!";
    return 0;
}