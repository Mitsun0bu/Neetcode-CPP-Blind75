#include "Solution.hpp"

bool Solution::isAnagram(std::string s, std::string t)
{
    if (s.length() != t.length())
        return (false);
    
    std::unordered_map<char, int> char_occurence;
    for (int i = 0; i < s.length(); i++)
    {
        char_occurence[s[i]]++;
        char_occurence[t[i]]--;
    }
    
    for (auto& entry : char_occurence)
    {
        if (entry.second != 0)
            return (false);
    }

    return (true);
}