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
    while (seconds--)
    {
        for (int i = 1; i < number_of_children; ++i)
        {
            if (arrangement[i] == 'G' && arrangement[i - 1] == 'B')
            {
                arrangement[i] = 'B';
                arrangement[i - 1] = 'G';
                ++i;
            }
        }
    }

    return arrangement;
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