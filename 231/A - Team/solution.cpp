#include<iostream>
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        int tmp = 0, x;
        for (int j = 0; j < 3; j++){
            std::cin >> x;
            if (x == 1)     tmp++;
        }
        if (tmp >= 2)       cnt++;
    }
    std::cout << cnt;
    return 0;
}