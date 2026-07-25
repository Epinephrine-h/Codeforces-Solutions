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
        int choosenCard;
        if (card[left] > card[right])
        {
            choosenCard = card[left];
            left++;
        }
        else
        {
            choosenCard = card[right];
            right--;
        }
        if (SerejaTurn)
            Sereja += choosenCard;
        else
            Dima += choosenCard;
        SerejaTurn = !SerejaTurn;
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