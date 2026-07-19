#include<iostream>
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int k, n, w;
    std::cin >> k >> n >> w;
    long long total = 0, tmp = k;
    for (int i = 0; i < w; i++){
        total += tmp;
        tmp += k;
    }
    if (total > n)      std::cout << total - n;
    else    std::cout << 0;
    return 0;
}