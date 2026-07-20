#include<iostream>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;  cin >> n;
    string s;
    cin >> s;
    int anton = 0, danik = 0;
    for (char c : s){
        if (c == 'A')   anton++;
        else    danik++;
    }
    if (anton == danik){
        cout << "Friendship";
    }
    else if (anton > danik){
        cout << "Anton";
    }
    else{
        cout << "Danik";
    }
    return 0; 
}