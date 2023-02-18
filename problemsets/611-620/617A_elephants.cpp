//  Problem: https://codeforces.com/problemset/problem/617/A

#include <iostream>
using namespace std;

//  Expected results:
//  5   ->  1
//
//  12   ->  3

//  Notes:
//  In one step the elephant can move 1, 2, 3, 4 or 5 positions forward

int main()
{
    int n, steps_needed = 0;
    int step_size[] = {5, 4, 3, 2, 1};
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        steps_needed += n / step_size[i];
        n = n % step_size[i];
    }
    cout << steps_needed;
    return 0;
}