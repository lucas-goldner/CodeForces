// Problem: https://codeforces.com/problemset/problem/734/A

#include <iostream>
#include <string>
using namespace std;

// Expected results:
// 6
// ADAAAA   ->  Anton
//
// 7
// DDDAADA   ->  Danik
//
// 6
// DADADA   ->  Friendship

int main()
{
    int games_played;
    string games_won_sequence;

    cin >> games_played;
    cin >> games_won_sequence;

    int anton = 0, danik = 0;

    for (int i = 0; i <= games_played - 1; i++)
    {
        if (games_won_sequence.at(i) == 65)
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton" << endl;
        return 0;
    }

    if (anton < danik)
    {
        cout << "Danik" << endl;
        return 0;
    }

    cout << "Friendship" << endl;

    return 0;
}