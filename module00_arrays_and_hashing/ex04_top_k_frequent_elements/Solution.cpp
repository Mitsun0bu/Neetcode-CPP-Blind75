#include "Solution.hpp"

std::vector<int> Solution::topKFrequent(std::vector<int>& nums, int k)
{
    // CREATE A HASHMAP TO STORE THE OCCURENCE OF EACH NUMBER
    std::map<std::string, int> hashmap;
    for (int i = 0; i < nums.size(); i++)
    {
        std::string key = "";
        key.append(std::to_string(nums[i]));
        hashmap[key] = hashmap[key] + 1;
    }
    
    // COPY THE MAP INTO A VECTOR OF PAIRS
    std::vector<std::pair<std::string, int>> pairs_vector(hashmap.begin(), hashmap.end());
    
    // SORT THE VECTOR BASED ON THE VALUES
    std::sort(pairs_vector.begin(), pairs_vector.end(), [](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b){return a.second > b.second;});

    // PUSH K ELEMENTS INTO THE RESULT VECTOR
    int push_counter = 0;
    std::vector<int> result = {};
    for (const auto& pair : pairs_vector)
    {
        if (push_counter < k)
        {
            result.push_back(atoi(pair.first.c_str()));
            push_counter++;
        }
        else
            break;
    }

    return(result);
}