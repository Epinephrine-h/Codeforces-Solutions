#include<iostream>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string s;   cin >> s;
    int distanceX = ex - sx, distanceY = ey - sy;
    int maxX = -1, maxY = -1;
    for (int i = 0; i < t; i++){
        if (distanceX > 0 && s[i] == 'E')   distanceX--;
        if (distanceX < 0 && s[i] == 'W')   distanceX++;
        if (distanceX == 0 && maxX == -1)     maxX = i;
        if (distanceY > 0 && s[i] == 'N')   distanceY--;
        if (distanceY < 0 && s[i] == 'S')   distanceY++;
        if (distanceY == 0 && maxY == -1)     maxY = i;
    }
    if (distanceX != 0 || distanceY != 0)     cout << -1;
    else cout << max(maxX, maxY) + 1;
    return 0;
}