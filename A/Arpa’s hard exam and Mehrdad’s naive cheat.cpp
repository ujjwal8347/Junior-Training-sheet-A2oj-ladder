/*#include <bits/stdc++.h>
using namespace std;
int binpow(int b)
{
    if (b == 0)
        return 1;
    int res = binpow(b / 2);
    if (b % 2)
        return (res * res * 1378) % 10;
    else
        return (res * res) % 10;
}
int main()
{
    int n;
    cin >> n;
    cout << binpow(n) << endl;
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 1 << endl;
    }
    else if (n % 4 == 0)
    {
        cout << 6 << endl;
    }
    else if (n % 4 == 1)
    {
        cout << 8 << endl;
    }
    else if (n % 4 == 2)
    {
        cout << 4 << endl;
    }
    else
    {
        cout << 2 << endl;
    }
    return 0;
}
