// Problem: https://codeforces.com/problemset/problem/41/A

#include <iostream>
#include <string>
using namespace std;

// Expected results:
//
// code
// edoc ->  YES
//
// abb
// aba  ->  NO
//
// code
// code ->  NO

int main()
{
    string s(""), t("");
    cin >> s;
    cin >> t;

    reverse(s.begin(), s.end());
    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}