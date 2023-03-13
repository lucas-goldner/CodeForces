// Problem: https://codeforces.com/problemset/problem/160/A

#include <iostream>
using namespace std;

// Expected results:
// 2
// 3 3  ->  2
//
// 3
// 2 1 2    ->  2

// Notes:
// Minimum number of coins, whose sum of values is strictly more than the sum of values of the remaining coins

int main()
{
    int n;
    cin >> n;
    int coins[n];
    int all_coins[n];
    int total_coins = 0;
    for (int i = 0; i < n; i++)
    {
        int coin;
        cin >> coin;
        coins[i] = coin;
        all_coins[i] = coin;
        total_coins += coin;
    }

    sort(coins, coins + n, less<int>());
    int my_coins = 0;
    int iteration = 0;
    while (my_coins <= total_coins / 2)
    {
        my_coins += all_coins[iteration];
        iteration++;
    }

    cout << iteration << endl;

    return 0;
}