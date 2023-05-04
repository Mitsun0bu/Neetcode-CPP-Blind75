#include "Solution.hpp"

std::vector<std::vector<std::string>> Solution::groupAnagrams(std::vector<std::string>& strs)
{
    // CREATE A HASHMAP WITH :
    //  - KEY   = GROUP CODE
    //  - VALUE = VECTOR OF STRINGS
    std::unordered_map<std::string, std::vector<std::string>> hashmap;
    for (int i = 0; i < strs.size(); i++)
    {
        std::string key = getKey(strs[i]);
        hashmap[key].push_back(strs[i]);
    }
    // FILL THE RESULT VECTOR WITH THE HASHMAP VALUES
    std::vector<std::vector<std::string>> result;
    for (auto it = hashmap.begin(); it != hashmap.end(); it++)
        result.push_back(it->second);
    return (result);
}

std::string Solution::getKey(std::string str)
{
    // COUNT THE OCCURENCE OF EACH CHARACTER IN str
    std::vector<int> char_count(26);
    for (int i = 0; i < str.size(); i++)
        char_count[str[i] - 'a']++;
    // CREATE A KEY FOR THE HASHMAP
    std::string key = "";
    for (int i = 0; i < 26; i++)
    {
        if (char_count[i] > 0)
        {
            key.append(std::to_string(char_count[i]));
            key.push_back('a' + i);
        }
    }
    return (key);
}


