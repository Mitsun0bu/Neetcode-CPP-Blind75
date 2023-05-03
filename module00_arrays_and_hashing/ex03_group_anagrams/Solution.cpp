#include "Solution.hpp"

std::vector< std::vector<std::string> > Solution::groupAnagrams(std::vector<std::string>& strs)
{
    std::vector< std::vector<std::string> > output{};

    while(strs.size() != 0)
    {
        if (output.size() == 0)
        {
            std::vector<std::string> new_vector = {strs[0]};
            output.push_back(new_vector);
            strs.erase(strs.begin());
            continue;
        }
        for(int i = 0; i < output.size(); i ++)
        {

            if (isAnagram(strs[0], output[i][0]) == true)
            {
                output[i].push_back(strs[0]);
            }
            else if (isAnagram(strs[0], output[i][0]) == false && strs.size() == 1)
            {
                std::vector<std::string> new_vect = {strs[0]};
                output.push_back(new_vect);
            }
            else
                continue;

            strs.erase(strs.begin());
            
            if (strs.size() == 0)
                return(output);
            else
                continue;
        }
        if (isAnagram(strs[0], output[0][0]) == false)
        {
            std::vector<std::string> new_vect = {strs[0]};
            output.push_back(new_vect);
            strs.erase(strs.begin());
        }
    }
    return (output);
}

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


