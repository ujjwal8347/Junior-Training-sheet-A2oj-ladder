#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;
    int ans;
    for (int i = 1; i <= 10; i++)
    {
        if ((k * i) % 10 == 0 || (k * i - r) % 10 == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}