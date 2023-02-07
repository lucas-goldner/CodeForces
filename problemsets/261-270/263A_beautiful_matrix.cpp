// Problem: https://codeforces.com/problemset/problem/263/A

#include <iostream>
#include <tuple>
using namespace std;

// Expected results:
// 0 0 0 0 0
// 0 0 0 0 1
// 0 0 0 0 0    -> 3
// 0 0 0 0 0
// 0 0 0 0 0
//
// 0 0 0 0 0
// 0 0 0 0 0
// 0 1 0 0 0    -> 1
// 0 0 0 0 0
// 0 0 0 0 0

tuple<int, int> locate_position_of_one(int matrix[5][5])
{
    int vertical_position = 0;
    int horizontal_position = 0;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            if (matrix[i][j] == 1)
            {
                vertical_position = i;
                horizontal_position = j;
            }
        }
    }

    return make_tuple(vertical_position, horizontal_position);
}

int change_matrix(int matrix[5][5])
{
    int number_of_turns = 0;
    int vertical_position, horizontal_position;
    tie(vertical_position, horizontal_position) = locate_position_of_one(matrix);

    if (vertical_position < 2)
    {
        number_of_turns = number_of_turns + (2 - vertical_position);
    }
    else if (vertical_position > 2)
    {
        number_of_turns = number_of_turns + (vertical_position - 2);
    }

    if (horizontal_position < 2)
    {
        number_of_turns = number_of_turns + (2 - horizontal_position);
    }
    else if (horizontal_position > 2)
    {
        number_of_turns = number_of_turns + (horizontal_position - 2);
    }

    return number_of_turns;
}

int main()
{
    int matrix[5][5];

    for (int i = 0; i <= 4; i++)
    {
        scanf("%i %i %i %i %i", &matrix[i][0], &matrix[i][1], &matrix[i][2], &matrix[i][3], &matrix[i][4]);
    }

    cout << change_matrix(matrix);

    return 0;
}