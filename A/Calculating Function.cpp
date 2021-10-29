#include <bits/stdc++.h>
using namespace std;

//  Another interesting solution that came into my mind to solve this problem is
//  By using AP series sum function
//  But it will not going to work because of constraints

int main()
{
    long long n, a;
    cin >> n;
    a = (n + 1) / 2;
    if (n % 2)
    {
        a = -a;
    }
    cout << a << endl;
    return 0;
}