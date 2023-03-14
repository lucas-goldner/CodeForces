// Problem: https://codeforces.com/problemset/problem/1030/A

#include <iostream>
#include <string>
using namespace std;

// Expected results:
// 3
// 0 0 1    ->  HARD
//
// 1
// 0    ->  EASY

int main()
{
    int people;
    cin >> people;
    for (int i = 0; i <= people - 1; i++)
    {
        int number;
        cin >> number;
        if (number == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }

    cout << "EASY" << endl;
    return 0;
}