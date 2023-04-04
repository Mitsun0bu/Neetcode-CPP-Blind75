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

// TOO SLOW
// bool isAnagram(std::string s, std::string t)
// {
//     if (s.length() == t.length())
//         return (false);
    
//     for (int i = 0; i < s.length(); i++)
//     {
//         std::string::difference_type occurence_in_s = std::count(s.begin(), s.end(), s[i]);
//         std::string::difference_type occurence_in_t = std::count(t.begin(), t.end(), s[i]);
//         if (occurence_in_s != occurence_in_t)
//             return (false);
//     }
//     return (true);
// }