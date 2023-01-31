// Problem: https://codeforces.com/problemset/problem/1/B

#include <iostream>
#include <string>
#include <regex>
#include <cmath>
using namespace std;

// Expected results:
// 2
// R23C55   ->  BC23
// BC23         R23C55
//
// 4
// R4C25    ->  Y4
// R90C35       AI90
// AP55         R55C42
// X83          R83C24

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

string getLettersForNumber(string number)
{
    string letters = "";
    for (int i = 0; i <= number.length() - 1; i++)
    {
        int current_number = stoi(number);
        if (i == number.length() - 1)
        {
            int remainder = current_number % 26;
            char letter = char(remainder + 64);
            letters.push_back(letter);
        }
        else
        {
            int quotient = current_number / 26;
            if (quotient != 0)
            {
                char letter = char(quotient + 64);
                letters.push_back(letter);
            }
        }
    }

    return letters;
}

string getNumbersForLetters(string letters)
{
    int number = 0;
    for (int i = 0; i <= letters.length() - 1; i++)
    {
        int currentIndex = letters.length() - 1 - i;
        int ascii_value = int(letters.at(currentIndex) - 64);
        double result = pow(26, i);
        number = number + ascii_value * result;
    }

    return to_string(number);
}

string convert_to_a1_system(string c_substring, int r_value)
{
    return getLettersForNumber(c_substring) + to_string(r_value);
}

string convert_to_rcxy_system(string y, int x)
{
    return "R" + to_string(x) + "C" + getNumbersForLetters(y);
}

string convert_from_one_system_to_other(string input)
{
    char r = 'R';
    char c = 'C';
    int r_index = input.find(r);
    int c_index = input.find(c);
    string r_substring = input.substr(r_index + 1, c_index - 1);
    string c_substring = input.substr(c_index + 1, input.length());

    if (is_rxcy_system(r_index, c_index, r_substring, c_substring))
    {
        int r_value = stoi(r_substring);
        return convert_to_a1_system(c_substring, r_value);
    }
    else
    {
        regex pattern("[A-Za-z]+([0-9]+)");
        smatch result;
        regex_search(input, result, pattern);
        int num = std::stoi(result[1].str());
        int num_index = input.find(to_string(num));
        string y_substring = input.substr(0, num_index);
        return convert_to_rcxy_system(y_substring, num);
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