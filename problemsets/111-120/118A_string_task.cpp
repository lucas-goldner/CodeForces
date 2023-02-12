// Problem: https://codeforces.com/problemset/problem/118/A

#include <iostream>
#include <string>
using namespace std;

//  Expected results:
//  tour ->  .t.r
//
//  Codeforces  ->  .c.d.f.r.c.s
//
//  aBAcAba ->  .b.c.b

// Notes:
// delete all the vowels,
// insert a character "." before each consonant,
// replace all uppercase consonants with corresponding lowercase ones.

string modify_string(string input)
{
    string output = "";
    string vowels[6] = {"a", "o", "y", "e", "u", "i"};
    for (int i = 0; i <= input.length() - 1; i++)
    {

        char c = char(tolower(input.at(i)));
        string empty = "";
        empty.push_back(c);
        bool isVowel = find(begin(vowels), end(vowels), empty) != end(vowels);
        if (!isVowel)
        {
            output = output + "." + c;
        }
    }
    return output;
}

int main()
{
    string input;
    cin >> input;
    cout << modify_string(input);
    return 0;
}