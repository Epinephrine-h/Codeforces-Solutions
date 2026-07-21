#include<iostream>
#include<iomanip>
 
using namespace std;
 
double sum(int n){
    double total = 0;
    while(n--){
        double p;
        cin >> p;
        total += p;
    }
    return total;
}
 
int main(){
    cin.tie(NULL);
    int n;  cin >> n;
    cout << fixed << setprecision(12) << sum(n)/n;
    return 0; 
}