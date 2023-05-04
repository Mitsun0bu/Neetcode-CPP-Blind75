#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>

class Solution
{
    public:

        std::vector<int> topKFrequent(std::vector<int>& nums, int k);

    private:
        
        std::string getKey(int num);
};