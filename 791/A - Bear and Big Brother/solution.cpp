#include<iostream>
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int a, b, cnt = 0;
    std::cin >> a >> b;
    while(a <= b){
        a *= 3;
        b *= 2;
        cnt++;
    }
    std::cout << cnt;
    return 0;
}