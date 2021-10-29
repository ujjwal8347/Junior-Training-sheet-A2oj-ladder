#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    unordered_set<int> set;
    set.insert(s1);
    set.insert(s2);
    set.insert(s3);
    set.insert(s4);
    cout << 4 - set.size() << endl;
    return 0;
}