// Problem: https://codeforces.com/problemset/problem/96/A

#include <iostream>
#include <string>
using namespace std;

//  Expected results:
//
//  001001   ->  NO
//
//  1000000001  ->  YES

//  Notes:
//  If there are at least 7 players of some team standing one after another, then the situation is considered dangerous

int main()
{
    string situation;
    cin >> situation;

    if (situation.length() <= 7)
    {
        cout << "NO" << endl;
        return 0;
    }

    int team_one_count = 0;
    int team_two_count = 0;

    for (int i = 0; i <= situation.length() - 1; i++)
    {
        if (situation.at(i) == '0')
        {
            team_one_count++;
            team_two_count = 0;
        }
        else
        {
            team_one_count = 0;
            team_two_count++;
        }

        if (team_one_count == 7 || team_two_count == 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}