#include<iostream>
#include<cctype>
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string s;
    std::cin >> s;
    s[0] = toupper(s[0]);
    std::cout << s;
    return 0;
}