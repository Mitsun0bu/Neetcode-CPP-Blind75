#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

class Solution
{
    public:

        std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs);

    private:
        
        std::string getKey(std::string str);
};