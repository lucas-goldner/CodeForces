// Problem: https://codeforces.com/problemset/problem/50/A

#include <iostream>
using namespace std;

// Expected results:
// 2 4 -> 4
// 3 3 -> 4

// Notes: board sizes in squares (1 ≤ M ≤ N ≤ 16)

int calculate_number_of_dominos(int m, int n)
{
    int area = m * n;
    return area / 2;
}

int main()
{
    int n, m;
    scanf("%i %i", &m, &n);
    int number_of_dominos = calculate_number_of_dominos(m, n);

    cout << to_string(number_of_dominos);

    return 0;
}