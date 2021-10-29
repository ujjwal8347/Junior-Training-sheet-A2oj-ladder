#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int n = 7 - max(x, y);
    int gcd = __gcd(n, 6);
    cout << n / gcd << "/" << 6 / gcd << endl;
    return 0;
}