// Problem: https://codeforces.com/problemset/problem/266/B

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//  Expected results:
//  5 1 ->  GBGGB
//  BGGBG
//  5 2 ->  GGBGB
//  BGGBG
//  4 1 ->  GGGB
//  GGGB

//  Notes:
//  Let's say that the positions in the queue are sequentially numbered by integers
//  from 1 to n, at that the person in the position number 1 is served first.
//  Then, if at time x a boy stands on the i-th position and a girl stands on the (i + 1)-th position,
//  then at time x + 1 the i-th position will have a girl and the (i + 1)-th position will have a boy.
//  The time is given in seconds.

string get_rerarranged_group(string arrangement, int number_of_children, int seconds)
{
    string current_arrangement = arrangement;

    for (int i = 0; i <= seconds - 1; i++)
    {
        for (int j = 0; j <= current_arrangement.length() - 1; j++)
        {
            if (current_arrangement[i] == 'G' && current_arrangement[i - 1] == 'B')
            {
                current_arrangement[i] = 'B';
                current_arrangement[i - 1] = 'G';
                ++i;
            }
        }
    }

    return current_arrangement;
}

int main()
{
    int number_of_children(0), seconds(0);
    string arrangement = "";
    scanf("%i %i", &number_of_children, &seconds);
    cin >> arrangement;

    string new_arrangement = get_rerarranged_group(arrangement, number_of_children, seconds);
    cout << new_arrangement << endl;

    return 0;
}