//  Problem: https://codeforces.com/problemset/problem/69/A

#include <iostream>
using namespace std;

// Expected results:
// 3
// 4 1 7
// -2 4 -1  ->  NO
// 1 -5 -3
//
// 3
// 3 -1 7
// -5 2 -4  ->  YES
// 2 -1 -3

// Notes:
// Check if the sum of all vectors is equal to 0

struct Triplet
{
    int x, y, z;
    bool isEmpty()
    {
        return x == 0 && y == 0 && z == 0;
    }
};

int main()
{
    int number_of_vectors;
    cin >> number_of_vectors;
    Triplet result_vector = {0, 0, 0};
    for (int i = 0; i <= number_of_vectors - 1; i++)
    {
        int x, y, z;
        scanf("%i %i %i", &x, &y, &z);
        result_vector.x += x;
        result_vector.y += y;
        result_vector.z += z;
    }

    if (result_vector.isEmpty())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}