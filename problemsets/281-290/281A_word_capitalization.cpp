// Problem: https://codeforces.com/problemset/problem/281/A

#include <iostream>
#include <string>
using namespace std;

// Expected results:
// ApPLe    ->  ApPLe
//
// konjac   ->  Konjac

// Notes: that during capitalization all the letters except the first one remains unchanged.

int main()
{
    string word;
    cin >> word;
    char first_letter_capitalized = char(toupper(word.at(0)));
    cout << first_letter_capitalized + word.substr(1, word.length());
}