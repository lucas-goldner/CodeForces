//  Problem: https://codeforces.com/problemset/problem/59/A

#include <iostream>
#include <string>
using namespace std;

//  Expected results:
//  HoUse   ->  house
//
//  ViP     ->  VIP
//
//  maTRIx  ->  matrix

bool return_to_lowered_string(int lower_letter_count, int length)
{
    if (length % 2 == 0)
    {
        return length / 2 <= lower_letter_count;
    }

    return length / 2 + 1 <= lower_letter_count;
}

int main()
{
    string input;
    cin >> input;
    int lower_letter_count = 0;
    for (int i = 0; i <= input.length() - 1; i++)
    {

        if (int(input.at(i)) > 96)
        {
            lower_letter_count++;
        }
    }

    if (return_to_lowered_string(lower_letter_count, input.length()))
    {
        transform(input.begin(), input.end(), input.begin(), [](unsigned char c)
                  { return tolower(c); });
        cout << input;
    }
    else
    {
        transform(input.begin(), input.end(), input.begin(), [](unsigned char c)
                  { return toupper(c); });
        cout << input;
    }

    return 0;
}