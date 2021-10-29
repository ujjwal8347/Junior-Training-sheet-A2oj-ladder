
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count1 = 0, count2 = 0;
    for (char &c : s)
    {
        if (c == 'D')
            count1++;
        else
            count2++;
    }
    if (count2 > count1)
        cout << "Anton";
    else if (count1 > count2)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}