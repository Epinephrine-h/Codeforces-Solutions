#include<iostream>
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string s;
    std::cin >> s;
    int counting[4] = {0};
    for (char c : s){
        if (c != '+'){
            counting[c - '0']++;
        }
    }
    bool first = true;
    for (int i = 1; i <= 3; i++){
        while(counting[i]){
            if (!first)     std::cout << '+';
            std::cout << i;
            first = false;
            counting[i]--;
        }
    }
    return 0;
}