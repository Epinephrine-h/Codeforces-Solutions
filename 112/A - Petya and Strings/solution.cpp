#include<iostream>
#include<cctype>
 
int compare(std::string a, std::string b){
    for (int i = 0; i < a.size(); i++){
        char x = tolower(a[i]);
        char y = tolower(b[i]);
        if (x < y)      return -1;
        if (x > y)     return 1;
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