#include<iostream>
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, k, cnt = 0;
    std::cin >> n >> k;
    int a[n+1];
    for (int i = 1; i <= n; i++)     std::cin >> a[i];
    for (int i = 1; i <= n; i++){
        if (a[i] > 0 && a[i] >= a[k])   cnt++;
        else    break;
    }
    std::cout << cnt;
    return 0;
}