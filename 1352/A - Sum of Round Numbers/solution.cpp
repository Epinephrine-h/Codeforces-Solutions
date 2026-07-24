#include<iostream>
#include<stack>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while(testcase--){
        stack<int> ans;
        int n, pow = 1;
        cin >> n;
        for (int i = 0; i < 5; i++){
            if (n  == 0)    break;
            int x = n % 10;
            n /= 10;
            if (x != 0)     ans.push(pow * x);
            pow *= 10;
        }
        cout << ans.size() << '
';
        while (!ans.empty()){
            cout << ans.top() << " ";
            ans.pop();
        }
        cout << '
';
    }
    return 0;
}