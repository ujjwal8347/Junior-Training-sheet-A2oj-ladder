#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    string s = "CMY";
    bool flag = 1;
    char c;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> c;
            if (s.find(c) != string::npos)
            {
                flag = 0;
            }
        }
    }
    cout << ((flag) ? "#Black&White" : "#Color") << endl;
    return 0;
}