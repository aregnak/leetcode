/*
Solution by aregnak, commented code isn't needed on leetcode's code section.
*/

// #include <iostream>
// #include <vector>

class Solution 
{
public:
    vector<int> resultsArray(vector<int>& nums, int k) 
    {
        int n = nums.size();
        std::vector<int> results;

        // subarrays in nums
        for (int right = 0; right <= n - k; right++)
        {
            bool skip = false;
            // contents in subarrays
            for (int i = right; i < right + k - 1; i++)
            {
                // check sorted
                if (nums[i] >= nums[i + 1])
                {
                    skip = true;
                    results.emplace_back(-1);
                    break;
                }

                //check consecutive
                if (nums[i + 1] > nums[i] + 1)
                {
                    skip = true;
                    results.emplace_back(-1);
                    break;
                }
            }

            if (!skip)
            {
                results.emplace_back(nums[right + k - 1]);
            }
        }

        return results;
    }
};
