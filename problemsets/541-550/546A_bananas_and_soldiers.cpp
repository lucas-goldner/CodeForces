//  Problem: https://codeforces.com/problemset/problem/546/A

#include <iostream>
using namespace std;

//  Excpected results:
//  3 17 4  ->  13

//  Notes:
//  He has to pay k dollars for the first banana, 2k dollars for the second one and so on

int calculate_missing_money(int initial_price_banana, int money, int bananas_wanted)
{
    int missing_money = 0;
    int current_banana_price = 0;

    for (int i = 1; i <= bananas_wanted; i++)
    {
        current_banana_price = i * initial_price_banana;
        missing_money = missing_money + current_banana_price;
    }

    if (money >= missing_money)
    {
        return 0;
    }

    return missing_money - money;
}

int main()
{
    int price_first_banana, money, bananas_wanted;
    scanf("%i %i %i", &price_first_banana, &money, &bananas_wanted);
    cout << calculate_missing_money(price_first_banana, money, bananas_wanted);
    return 0;
}