#include <iostream>
#include<unordered_map>
 
using namespace std;
 
int check(){
    int n;  cin >> n;
    int arr[n];
    unordered_map<int,int> mark;
    for (int& i : arr){
        cin >> i;
        mark[i]++;
    }
    for (int i = 0; i < n; i++){
        if (mark[arr[i]] == 1)      return i+1;
    }
    return 0;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        cout << check() << '
';
    }
    return 0;
}