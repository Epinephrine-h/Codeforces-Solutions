#include <iostream>
 
using namespace std;
 
void Answer()
{
    int n;
    cin >> n;
    int card[n];
    for (int &i : card)
        cin >> i;
    int left = 0, right = n - 1, Sereja = 0, Dima = 0;
    bool SerejaTurn = true;
    while (left <= right)
    {
        if (SerejaTurn)
        {
            if (card[left] > card[right])
            {
                Sereja += card[left];
                left++;
            }
            else
            {
                Sereja += card[right];
                right--;
            }
            SerejaTurn = false;
        }
        else
        {
            if (card[left] > card[right])
            {
                Dima += card[left];
                left++;
            }
            else
            {
                Dima += card[right];
                right--;
            }
            SerejaTurn = true;
        }
    }
    cout << Sereja << " " << Dima;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Answer();
    return 0;
}