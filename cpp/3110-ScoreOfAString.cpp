/*
Solution by aregnak, commented code isn't needed on leetcode's code section.
*/

// #include <iostream>
// #include <cstring>

// using namespace std
// i dont like this line above so i use std::xx either way

class Solution {
public:
    int scoreOfString(string s) 
    {
        int sLen = s.size() - 1;
        int tmp = 0;
        int finalSum = 0;
        std::vector<int> diffs; 
        diffs.reserve(sLen);

        for (int i = 0; i < sLen; i++)
        {
            tmp = abs(int(s[i]) - int(s[i+1]));
            diffs.push_back(tmp);
        }

        for (int i = 0; i < sLen; i++)
        {
            finalSum += diffs[i];
        }

        std::cout << finalSum << std::endl;

        return finalSum;
    }
};

// idk how to view the full code it only lets you see the class.
// int main should look something like:
/*
int main()
{
    Solution sol; // create sol object
    std::string s = "whatever"; // word you want

    int score = sol.scoreOfString(s);

    return 0;
}
*/