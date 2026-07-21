#include<iostream>
 
using namespace std;
 
bool isDifficult(int n){
    bool hard = false;
    while(n--){
        int x;
        cin >> x;
        if (x == 1)     hard = true;
    }
    return hard;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (isDifficult(n))     cout << "HARD";
    else    cout << "EASY";
    return 0; 
}