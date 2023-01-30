// Problem: https://codeforces.com/problemset/problem/1/B

#include <iostream>
#include <string>
using namespace std;

// Expected results:
// 2
// R23C55   ->  BC23
// BC23         R23C55

// Notes:
// RXCY system -> X and Y value e.g: R23C55
// A1 system -> A, B, ..., AA, AB, ..., ZZ, AAA and 1, 2, 3, ..., 100 e.g: BC23

bool is_rxcy_system(int r_index, int c_index, string r_substring, string c_substring)
{
    if (r_index != string::npos && c_index != string::npos && r_substring.length() >= 1 && c_substring.length() >= 1)
    {
        return true;
    }
    return false;
}

string convert_to_a1_system(string r_substring, int c_value)
{
    string r_converted = "";

    // for (int i = 0; i <= r_substring.length(); i++)
    // {
    //     int number = tolower(r_substring.at(i)) - 96;
    //     cout << number;
    // }

    return "A1" + to_string(c_value);
}

string convert_from_one_system_to_other(string input)
{
    char r = 'R';
    char c = 'C';
    int r_index = input.find(r);
    int c_index = input.find(c);
    string r_substring = input.substr(r_index + 1, c_index - 1);
    string c_substring = input.substr(c_index + 1, input.length());
    int c_value = stoi(c_substring);

    if (is_rxcy_system(r_index, c_index, r_substring, c_substring))
    {
        return convert_to_a1_system(r_substring, c_value);
    }
    else
    {
        return "RCXY";
    }
}

int main()
{
    int number_of_coordinates;
    cin >> number_of_coordinates;
    string inputs[number_of_coordinates];
    string convertedInputs[number_of_coordinates];
    for (int i = 0; i <= number_of_coordinates - 1; i++)
    {
        cin >> inputs[i];
    }

    for (int i = 0; i <= number_of_coordinates - 1; i++)
    {
        convertedInputs[i] = convert_from_one_system_to_other(inputs[i]);
    }

    for (int i = 0; i <= number_of_coordinates - 1; i++)
    {
        cout << convertedInputs[i] + "\n";
    }
    return 0;
}