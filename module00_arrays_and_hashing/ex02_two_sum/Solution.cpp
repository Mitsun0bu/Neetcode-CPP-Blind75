#include "Solution.hpp"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target)
{
        std::unordered_map<int, int>    my_map;
        std::vector<int>                result;
        
        for (int i_left_operand = 0; i_left_operand < nums.size(); i_left_operand++)
        {
            int left_operand    = nums[i_left_operand];
            int right_operand   = target - nums[i_left_operand];

            if (my_map.find(right_operand) != my_map.end())
            {
                int i_right_operand = my_map[right_operand];
                result.push_back(i_right_operand);
                result.push_back(i_left_operand);
                break;
            }
            else
                my_map.insert({left_operand, i_left_operand});
        }
        
        return (result);
}


