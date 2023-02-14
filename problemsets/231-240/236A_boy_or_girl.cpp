// Problem: https://codeforces.com/problemset/problem/236/A

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//  Expected results:
//
//  wjmzbmr ->  CHAT WITH HER!
//
//  xiaodao ->  IGNORE HIM!
//
//  sevenkplus  ->  CHAT WITH HER!

//  Notes:
//  If the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female

int count_unique_letters(string input)
{
    int number_of_unique_letters = 0;
    vector<string> saved_letters;
    for (int i = 0; i <= input.length() - 1; i++)
    {
        string letter = "";
        letter.push_back(input.at(i));
        if (find(begin(saved_letters), end(saved_letters), letter) == end(saved_letters))
        {
            number_of_unique_letters++;
            saved_letters.push_back(letter);
        }
    }

    return number_of_unique_letters;
}

int main()
{
    string username;
    cin >> username;
    if (count_unique_letters(username) % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}