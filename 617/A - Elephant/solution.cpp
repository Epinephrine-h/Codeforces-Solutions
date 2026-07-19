#include<iostream>
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int x, cnt = 0;
    std::cin >> x;
    cnt = x / 5;
    if (x % 5 != 0)     cnt++;
    std::cout << cnt;
    return 0;
}