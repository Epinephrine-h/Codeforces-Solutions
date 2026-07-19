#include<iostream>
#include<vector>
#include<cctype>
#include<algorithm>
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string s;
    std::cin >> s;
    std::vector<int> nums;
    for (char c : s){
        if (std::isdigit(c)){
            nums.push_back(c - '0');
        }
    }
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++){
        std::cout << nums[i];
        if (i != nums.size() - 1)   std::cout << '+';
    }
    return 0;
}