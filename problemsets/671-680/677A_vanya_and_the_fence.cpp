// Problem: https://codeforces.com/problemset/problem/677/A

#include <iostream>
#include <string>
using namespace std;

// Expected results:
// 3 7
// 4 5 14   ->  4
//
// 6 1
// 1 1 1 1 1 1  ->  6
//
// 6 5
// 7 6 8 9 10 5 ->  11

int main()
{
    int number_of_friends, height;
    scanf("%i %i", &number_of_friends, &height);
    int width = 0;
    for (int i = 0; i <= number_of_friends - 1; i++)
    {
        int friend_height = 0;
        cin >> friend_height;
        if (friend_height <= height)
        {
            width += 1;
        }
        else
        {
            width += 2;
        }
    }

    cout << width << endl;

    return 0;
}