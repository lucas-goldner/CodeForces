// Problem: https://codeforces.com/problemset/problem/116/A

#include <iostream>
#include <string>
using namespace std;

// Expected results:
// 4
// 0 3
// 2 5  ->  6
// 4 2
// 4 0

int main()
{
    int number_of_stops(0), max_capicity(0), current_passengers(0);
    cin >> number_of_stops;
    for (int i = 0; i <= number_of_stops - 1; i++)
    {
        int entering(0), leaving(0);
        scanf("%i %i", &leaving, &entering);

        current_passengers -= leaving;
        current_passengers += entering;
        if (current_passengers > max_capicity)
        {
            max_capicity = current_passengers;
        }
    }

    cout << max_capicity << endl;

    return 0;
}