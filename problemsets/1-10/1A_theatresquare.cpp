// Problem: https://codeforces.com/problemset/problem/1/A

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip> // In order to use setprecision this header was needed
using namespace std;

// Expected results:
// 6 6 4 -> 4
// 1 1 1 -> 1
// 1000000000 1000000000 1 -> 1000000000000000000

int main()
{
    double n, m, a, numberOfFlagstones;
    cin >> n >> m >> a;
    numberOfFlagstones = ceil(m / a) * ceil(n / a);
    cout << fixed << setprecision(0) << numberOfFlagstones;
    return 0;
}