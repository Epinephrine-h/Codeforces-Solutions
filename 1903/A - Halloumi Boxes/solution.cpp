#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;   cin >> testcase;
    while(testcase--){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int& i : arr)      cin >> i;
        if (k >= 2 || is_sorted(arr, arr + n))      cout << "YES
";
        else    cout << "NO
";
    }
    return 0;
}