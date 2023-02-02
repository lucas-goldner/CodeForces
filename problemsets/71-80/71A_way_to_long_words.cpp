// Problem: https://codeforces.com/problemset/problem/71/A

#include <iostream>
using namespace std;

//  Expected results:
//  4
//  word                                                word
//  localization                                    ->  l10n
//  internationalization                                i18n
//  pneumonoultramicroscopicsilicovolcanoconiosis       p43s

// Notes:
// A word is too long, if its length is strictly more than 10 characters

string shorten_word(string input)
{
    if (input.length() <= 10)
    {
        return input;
    }

    string shortened_word = "";
    for (int i = 0; i <= input.length() - 1; i++)
    {
        if (i == 0 || i == input.length() - 1)
        {
            shortened_word = shortened_word + input[i];
        }

        if (i == input.length() - 2)
        {
            shortened_word = shortened_word + to_string(i);
        }
    }

    return shortened_word;
}

int main()
{
    int number_of_words;
    cin >> number_of_words;
    string inputs[number_of_words];
    string inputs_converted[number_of_words];
    for (int i = 0; i <= number_of_words - 1; i++)
    {
        cin >> inputs[i];
    }

    for (int i = 0; i <= number_of_words - 1; i++)
    {
        inputs_converted[i] = shorten_word(inputs[i]);
    }

    for (int i = 0; i <= number_of_words - 1; i++)
    {
        cout << inputs_converted[i] + "\n";
    }

    return 0;
}