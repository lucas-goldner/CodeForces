//  Problem: https://codeforces.com/problemset/problem/977/A

#include <iostream>
using namespace std;

//  Expected results:
//
//  512 4   ->  50
//
//  1000000000 9    ->  1

//  Notes:
//  if the last digit of the number is non-zero, she decreases the number by one;
//  if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).

int main()
{
    int number, subtractions;
    scanf("%i %i", &number, &subtractions);

    for (int i = 0; i <= subtractions - 1; i++)
    {
        if (number % 10 != 0)
        {
            number--;
        }
        else
        {
            number = number / 10 + number % 10;
        }
    }

    cout << number << endl;
    return 0;
}