#include "Solution.hpp"

bool Solution::containsDuplicate(const std::vector<int>& nums)
{
    std::unordered_set<int> seen_element;
    for (int num : nums)
    {
        if (seen_element.find(num) != seen_element.end())
            return (true);
        seen_element.insert(num);
    }
    return (false);
}