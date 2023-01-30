// Problem: https://codeforces.com/problemset/problem/1/A

#include <iostream>
#include <cmath>
using namespace std;

// Expected results
// 6 6 4 -> 4
// 1 1 1 -> 1

int main()
{
    double n, m, a, numberOfFlagstones;
    cin >> n >> m >> a;
    numberOfFlagstones = ceil(m / a) * ceil(n / a);
    cout << numberOfFlagstones;
    return 0;
}