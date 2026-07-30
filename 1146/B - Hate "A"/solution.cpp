#include<iostream>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string t;   cin >> t;
    int countA = 0;
    for (char ch : t){
        if (ch == 'a')      countA++;
    }
    int valid = t.size() - countA;
    if (valid % 2 == 1){
        cout << ":(";
        return 0;
    }
    int lenS = countA + valid / 2;
    int p1 = 0, p2 = lenS;
    while (p1 < lenS){
        if (t[p1] != 'a'){
            if (t[p1] != t[p2]){
                cout << ":(";
                return 0;
            }
            p2++;
        }
        p1++;
    }
    cout << t.substr(0,lenS);
    return 0;
}