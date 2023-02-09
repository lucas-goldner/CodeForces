// Problem: https://codeforces.com/problemset/problem/339/A

#include <iostream>
#include <string>
#include <sstream>
#include <regex>
using namespace std;

// Expected notes:
//  3+2+1   ->  1+2+3
//
//  1+1+3+1+3   -> 1+1+1+3+3
//
//  2       ->  2

vector<int> extract_integers_from_words(string str)
{
    vector<int> numbers;
    regex regex(R"(\d+)");
    smatch match;
    while (regex_search(str, match, regex))
    {
        numbers.push_back(stoi(match.str()));
        str = match.suffix();
    }

    return numbers;
}

int main()
{
    string n;
    cin >> n;
    vector<int> extracted_numbers = extract_integers_from_words(n);
    sort(extracted_numbers.begin(), extracted_numbers.end());
    string result = "";
    for (int i : extracted_numbers)
    {
        result = result + to_string(i) + "+";
    }
    result = result.substr(0, result.length() - 1);
    cout << result;

    return 0;
}