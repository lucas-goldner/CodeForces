// Problem: https://codeforces.com/problemset/problem/110/A

#include <iostream>
#include <string>
using namespace std;

// Expected results:
// 40047    ->  NO
//
// 7747774  ->  YES
//
// 1000000000000000000    ->  NO
//
// 4744000695826    ->  YES

// Notes:
// Lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7
//
// Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number.
// He wonders whether number n is a nearly lucky number

int main()
{
    string n;
    int lucky_number_digit_counter;
    cin >> n;

    for (int i = 0; i <= n.length() - 1; i++)
    {
        string digit;
        digit.push_back(n.at(i));
        if (digit == "4" || digit == "7")
        {
            lucky_number_digit_counter++;
        }
    }

    if (lucky_number_digit_counter == 4 || lucky_number_digit_counter == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}