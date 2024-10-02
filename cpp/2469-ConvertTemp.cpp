/*
Solution by aregnak, commented code isn't needed on leetcode's code section.
*/

// #include <iostream>

// using namespace std
// i dont like this line above so i use std::xx either way

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
    double kel = 0;
    double fa = 0;

    vector<double> ans;
    ans.reserve(2);

    kel = celsius + 273.15;
    fa = celsius * 1.80 + 32.00;

    ans.emplace_back(kel);
    ans.emplace_back(fa);

    return ans;

    }
};

// idk how to view the full code it only lets you see the class.