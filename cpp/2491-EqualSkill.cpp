/*
Solution by aregnak, commented code isn't needed on leetcode's code section.
*/

// #include <algorithm>
// #inlcude <vector>
// #include <cmath>

class Solution
{
public:
    long long dividePlayers(vector<int>& skill)
    {
        auto st = skill.begin();
        auto x = skill.end();
        std::vector<int> teamChem(skill.size() / 2);

        std::sort(st, x);

        // check if skill array is uneven
        if (skill.size() % 2 != 0)
        {
            return -1;
        }

        int cntUp = 0;
        int cntDn = (skill.size()) - 1;
        int skillPerTeam = skill[cntUp] + skill[cntDn];
        int tmp = 0;
        while (cntUp != cntDn + 1)
        {
            tmp = skill[cntUp] + skill[cntDn];
            // check to see if teams are all equal skill
            if (tmp != skillPerTeam)
            {
                return -1;
            }

            teamChem[cntUp] = skill[cntUp] * skill[cntDn];
            cntUp++;
            cntDn--;
        }

        int totalChem = 0;
        for (int i : teamChem)
        {
            totalChem += i;
        }

        return totalChem;
    }
};