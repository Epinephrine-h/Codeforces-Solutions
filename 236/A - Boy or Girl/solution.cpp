#include<iostream>
#include<set>
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string s;
    std::cin >> s;
    std::set<char> quantity;
    for (char c : s){
        quantity.insert(c);
    }
    if (quantity.size() % 2 == 0){
        std::cout << "CHAT WITH HER!";
    }
    else{
        std::cout << "IGNORE HIM!";
    }
    return 0;
}