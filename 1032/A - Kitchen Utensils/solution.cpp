#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    unordered_map<int, int> utensils;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        utensils[x]++;
    }
    int max_amount = 0;
    for (const auto &u : utensils)  max_amount = max(max_amount, u.second);
    int dinnerForEach = (max_amount + k - 1)/k;
    cout << dinnerForEach * utensils.size() * k - n;
    return 0;
}