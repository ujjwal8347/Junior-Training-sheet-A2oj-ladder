#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string ans = "";
    int i = 0;
    bool flag = 1;
    while (i < s.size())
    {
        if (s.substr(i, 3) == "WUB")
        {
            if (!flag)
            {
                flag = !flag;
                ans.push_back(' ');
            }
            i += 3;
        }
        else
        {
            flag = 0;
            ans.push_back(s[i++]);
        }
    }
    cout << ans << endl;
    return 0;
}