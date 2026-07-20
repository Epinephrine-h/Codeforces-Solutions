#include<iostream>
#include<cctype>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int up = 0, down = 0;
    for (char c : s){
        if ('a' <= c && c <= 'z')       down++;
        else    up++;
    }
    if (down >= up){
        for (char& c : s){
            c = tolower(c);
        }
    }
    else{
        for (char& c : s){
            c = toupper(c);
        }
    }
    cout << s;
    return 0;
}