#include<iostream>
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, x = 0;
    std::cin >> n;
    while(n--){
        std::string s;
        std::cin >> s;
        if (s[1] == '+')    x++;
        else    x--;
    }
    std::cout << x;
    return 0;
}