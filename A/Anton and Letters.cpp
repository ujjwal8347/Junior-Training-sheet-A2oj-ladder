#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    unordered_set<char> set;
    for (char &c : s)
    {
        if (islower(c))
        {
            set.insert(c);
        }
    }
    cout << set.size() << endl;
    return 0;
}