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

struct stop
{
    int passengers_entering = 0, passengers_leaving = 0;
};

int calculate_maximum_capicity(stop stops[], int number_of_stops)
{
    int max_capicity = 0;
    int current_passengers = 0;
    for (int i = 0; i <= number_of_stops - 1; i++)
    {
        current_passengers -= stops[i].passengers_leaving;
        current_passengers += stops[i].passengers_entering;
        if (max_capicity <= current_passengers)
        {
            max_capicity = current_passengers;
        }
    }
    return max_capicity;
}

int main()
{
    int number_of_stops = 0;
    stop stops[number_of_stops];
    cin >> number_of_stops;
    for (int i = 0; i <= number_of_stops - 1; i++)
    {
        scanf("%i %i", &stops[i].passengers_leaving, &stops[i].passengers_entering);
    }

    int capicity = calculate_maximum_capicity(stops, number_of_stops);

    cout << capicity << endl;

    return 0;
}