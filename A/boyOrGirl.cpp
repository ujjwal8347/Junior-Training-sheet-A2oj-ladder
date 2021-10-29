#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    unordered_set<int> set;
    for (char &c : s)
    {
        set.insert(c);
    }
    cout << (set.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;
    return 0;
}