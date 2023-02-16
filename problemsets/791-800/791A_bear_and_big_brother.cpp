//  Problem: https://codeforces.com/problemset/problem/791/A

#include <iostream>
using namespace std;

//  Notes: Limak and Bob weigh a and b respectively
//  It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.
//  Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

//  Expected Notes:
//  4 7 ->  2
//
//  4 9 ->  3
//
//  1 1 ->  1

int calculate_years_until_limak_is_havier_than_bob(int wl, int wb)
{
    int iterations = 0;
    while (wl <= wb)
    {
        wl = wl * 3;
        wb = wb * 2;
        iterations++;
    }

    return iterations;
}

int main()
{
    int weight_limak, weight_bob;
    scanf("%i %i", &weight_limak, &weight_bob);
    cout << calculate_years_until_limak_is_havier_than_bob(weight_limak, weight_bob);
    return 0;
}