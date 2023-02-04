// Problem: https://codeforces.com/problemset/problem/158/A
#include <iostream>
using namespace std;

// Expected results:
// 8 5
// 10 9 8 7 7 7 5 5 -> 6
//
// 4 2
// 0 0 0 0 -> 0
//
// 5 5
// 1 1 1 1 1 -> 5

// Notes:
// Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round

int count_player_that_will_pass(int n, int k, int player_scores[])
{
    int players_that_will_pass = 0;
    int score_to_beat = player_scores[k - 1];
    for (int i = 0; i <= n - 1; i++)
    {
        if (player_scores[i] >= score_to_beat && player_scores[i] > 0)
        {
            players_that_will_pass++;
        }
    }

    return players_that_will_pass;
}

int main()
{
    int number_of_participants, position_of_player;
    scanf("%i %i", &number_of_participants, &position_of_player);
    int player_scores[number_of_participants];
    for (int i = 0; i <= number_of_participants - 1; i++)
    {
        cin >> player_scores[i];
    }

    cout << count_player_that_will_pass(number_of_participants, position_of_player, player_scores);

    return 0;
}