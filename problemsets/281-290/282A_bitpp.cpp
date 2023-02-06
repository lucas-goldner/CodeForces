// Problem: https://codeforces.com/problemset/problem/282/A

#include <iostream>
using namespace std;

// Expected results:
// 1
// ++X  -> 1
// 2
// X++
// --X  -> 0

int add_or_subtract(string input)
{
    if (input == "++X" || input == "X++")
    {
        return 1;
    }
    else if (input == "--X" || input == "X--")
    {
        return -1;
    }

    return 0;
}

int main()
{
    int n, x = 0;
    cin >> n;
    for (int i = 0; i <= n - 1; i++)
    {
        string input;
        cin >> input;
        int number_to_add = add_or_subtract(input);
        x = x + number_to_add;
    }

    cout << x;
    return 0;
}