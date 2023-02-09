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

// Note:
// http://en.wikipedia.org/wiki/Lexicographical_order

int get_lexical_value(string input)
{
    int lexical_value = 0;

    for (auto &c : input)
    {
        lexical_value = lexical_value + tolower(c);
    }

    return lexical_value;
}

int get_lexicographical_order(string one, string two)
{
    int difference = 0;
    int one_lexical_value = get_lexical_value(one);
    int two_lexical_value = get_lexical_value(two);

    if (one_lexical_value < two_lexical_value)
    {
        return -1;
    }
    else if (one_lexical_value > two_lexical_value)
    {
        return 1;
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