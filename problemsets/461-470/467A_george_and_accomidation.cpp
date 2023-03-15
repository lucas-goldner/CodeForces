// Problem: https://codeforces.com/problemset/problem/467/A

#include <iostream>
#include <string>
using namespace std;

// Expected results:
// 3
// 1 1
// 2 2  ->  0
// 3 3
//
// 3
// 1 10
// 0 10 ->  2
// 10 10

// Notes:
// The dormitory has n rooms in total. At the moment the i-th room has pi people living in it
// and the room can accommodate qi people in total (pi ≤ qi).

int main()
{
    int n;
    cin >> n;
    int rooms = 0;

    for (int i = 0; i <= n - 1; i++)
    {
        int people_living(0), room_capacity(0);
        scanf("%i %i", &people_living, &room_capacity);
        if (people_living + 2 <= room_capacity)
        {
            rooms++;
        }
    }

    cout << rooms << endl;

    return 0;
}
