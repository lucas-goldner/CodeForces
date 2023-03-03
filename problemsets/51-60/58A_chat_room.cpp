// Problem: https://codeforces.com/problemset/problem/58/A

#include <iostream>
#include <string>
using namespace std;

// Expected results:
//
// ahhellllloou ->  YES
//
// hlelo    ->  NO

int main()
{
    string s = "";
    cin >> s;
    string hello = "";

    for (int i = 0; i <= s.length() - 1; i++)
    {
        if (s[i] == 'h' && hello.length() == 0)
        {
            hello.push_back(s[i]);
        }

        if (s[i] == 'e' && hello.length() == 1)
        {
            hello.push_back(s[i]);
        }

        if (s[i] == 'l' && (hello.length() == 2 || hello.length() == 3))
        {
            hello.push_back(s[i]);
        }

        if (s[i] == 'o' && hello.length() == 4)
        {
            hello.push_back(s[i]);
        }
    }

    if (hello == "hello")
    {
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;
    return 0;
}