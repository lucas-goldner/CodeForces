// Problem: https://codeforces.com/problemset/problem/266/A

#include <iostream>
#include <string>
using namespace std;

//  Expteced results:
//  3
//  RRG ->  1
//
//  5
//  RRRRR   ->  4
//
//  4
//  BRBG    ->  0

int get_stones_that_need_to_be_taken(string stones_order)
{
    int number_of_stones_taken = 0;
    for (int i = 0; i <= stones_order.length() - 1; i++)
    {
        if (i != stones_order.length() - 1)
        {
            if (stones_order.at(i) == stones_order.at(i + 1))
            {
                number_of_stones_taken++;
            }
        }
    }

    return number_of_stones_taken;
}

int main()
{
    int number_of_stones;
    string stones_order;
    cin >> number_of_stones;
    cin >> stones_order;
    cout << to_string(get_stones_that_need_to_be_taken(stones_order));

    return 0;
}