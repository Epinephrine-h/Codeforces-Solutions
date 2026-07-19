#include<iostream>
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int e, x, y;
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            std::cin >> e;
            if (e == 1){
                x = i;
                y = j;
            }
        }
    }
    std::cout << abs(3 - x) + abs(3 - y);
    return 0;
}