#include<iostream>
using namespace std;
 
bool check(){
    string guest, host, letters;
    cin >> guest >> host >> letters;
    int mark[26] = {0};
    for (char c : guest)    mark[c - 'A']++;
    for (char c : host)     mark[c - 'A']++;
    for (char c : letters)      mark[c - 'A']--;
    for (int i : mark)      if (i != 0)     return false;
    return true;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (check())        cout << "YES";
    else    cout << "NO";
    return 0;
}