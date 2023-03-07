// Problem: https://codeforces.com/problemset/problem/122/A

#include <iostream>
#include <string>
using namespace std;

// Expected results:
// 47   ->  YES
// 16   ->  YES
// 78   ->  NO

bool contains_only_4_and_7(int n)
{
    string number = to_string(n);
    for (int i = 0; i <= number.length() - 1; i++)
    {
        if (number[i] != '7' && number[i] != '4')
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    if (contains_only_4_and_7(n))
    {
        cout << "YES" << endl;
        return 0;
    }
    else if (n % 7 == 0)
    {
        cout << "YES" << endl;
        return 0;
    }
    else if (n % 4 == 0)
    {
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;
    return 0;
}