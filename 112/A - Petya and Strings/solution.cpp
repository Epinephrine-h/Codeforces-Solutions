#include<iostream>
 
int compare(std::string a, std::string b){
    int i = 0;
    while(i < a.size()){
        int x = a[i];
        int y = b[i];
        if (x > 90)     x -= 32;
        if (y > 90)     y -= 32;
        if (x < y)      return -1;
        if (x > y)      return 1;
        i++;
    }
    return 0;
}
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string s1, s2;
    std::cin >> s1 >> s2;
    std::cout << compare(s1,s2);
    return 0;
}