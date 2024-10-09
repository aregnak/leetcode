/*
Solution by aregnak, commented code isn't needed on leetcode's code section.
*/

class Solution 
{
public:
    int smallestEvenMultiple(int n) 
    {
        int mult = 2; // start at 2 since the number can't be less than 2

        // while not a multiple of either, increment
        while ((mult % 2 != 0) || (mult % n != 0)) 
        {       
            mult++;
        }
        
        return mult;
    }
};