#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 1; i <= 4; i++)
    {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    int sum = 0;
    for (char &c : s)
    {
        sum += arr[c - '0'];
    }
    cout << sum << endl;
    return 0;
}