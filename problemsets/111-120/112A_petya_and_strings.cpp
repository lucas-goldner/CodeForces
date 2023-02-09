// Problem: https://codeforces.com/problemset/problem/112/A

#include <iostream>
#include <string>
using namespace std;

// Expected results:
// aaaa
// aaaA -> 0
//
// abs
// Abz -> -1
//
// abcdefg
// AbCdEfF -> 1
//
// aslkjlkasdd
// asdlkjdajwi -> 1

// Note:
// http://en.wikipedia.org/wiki/Lexicographical_order

int get_ascii_value_of_lower(char c)
{
    return tolower(c);
}

int get_lexicographical_order(string one, string two)
{
    for (int i = 0; i <= one.length() - 1; i++)
    {
        int one_ascii = get_ascii_value_of_lower(one.at(i));
        int two_ascii = get_ascii_value_of_lower(two.at(i));
        if (one_ascii < two_ascii)
        {
            return -1;
        }
        else if (one_ascii > two_ascii)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    string one, two;
    cin >> one;
    cin >> two;
    cout << get_lexicographical_order(one, two);

    return 0;
}