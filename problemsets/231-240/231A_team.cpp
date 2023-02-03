// Problem: https://codeforces.com/problemset/problem/231/A

#include <iostream>
using namespace std;

// Example:
// 3
// 1 1 0    ->  2
// 1 1 1
// 1 0 0
//
// 2
// 1 0 0    ->  1
// 0 1 1

bool will_they_do_the_problem(int inputs[3])
{
    int totalanswers = inputs[0] + inputs[1] + inputs[2];
    if (totalanswers >= 2)
    {
        return true;
    }
    return false;
}

int count_occurrences(bool *array, int size)
{
    int res = 0;
    for (int i = 0; i <= size - 1; i++)
    {
        if (array[i] == true)
        {
            res++;
        }
    }

    return res;
}

int main()
{
    int number_of_problems;
    int number_of_participants = 3;
    cin >> number_of_problems;
    int inputs[number_of_problems][number_of_participants];
    bool inputs_converted[number_of_problems];
    for (int i = 0; i <= number_of_problems - 1; i++)
    {
        scanf("%i %i %i", &inputs[i][0], &inputs[i][1], &inputs[i][2]);
        inputs_converted[i] = will_they_do_the_problem(inputs[i]);
    }

    int result = count_occurrences(inputs_converted, number_of_problems);
    cout << to_string(result) + "\n";

    return 0;
}