// Problem: https://codeforces.com/problemset/problem/271/A

#include <iostream>
using namespace std;

// Expected results:
// 1987 ->  2013
// 2013 ->  2014

bool year_has_distinct_digits(int year)
{
    string year_as_string = to_string(year);

    for (int i = 0; i <= year_as_string.length() - 1; i++)
    {
        for (int j = i + 1; j < year_as_string.length(); j++)
        {
            if (year_as_string[i] == year_as_string[j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int year;
    cin >> year;
    year++;

    while (year_has_distinct_digits(year) == false)
    {
        year++;
    }

    cout << year << endl;

    return 0;
}