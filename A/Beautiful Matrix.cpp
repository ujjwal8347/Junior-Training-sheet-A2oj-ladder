#include <bits/stdc++.h>
using namespace std;
int main()
{
    int minimumMoves;
    int a;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a;
            if (a)
                minimumMoves = abs(i - 2) + abs(j - 2);
        }
    }
    cout << minimumMoves;
    return 0;
}