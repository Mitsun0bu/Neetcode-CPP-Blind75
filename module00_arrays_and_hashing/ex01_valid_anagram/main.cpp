#include "./Solution.hpp"

int main()
{
    // VARIABLES DECLARATION
    Solution    solution;
    bool        isAnagram = false;

    // CREATE A VECTOR OF PAIRS TO BE TESTED
    const std::pair<std::string, std::string> testCases[] = {
        {"anagram", "nagaram"},
        {"rat", "car"}
    };

    // TESTING LOOP
    for (const auto& testCase : testCases)
    {
        // PRINT THE TESTED ARRAY
        std::cout << "[TESTED PAIR]\t: ";
        std::cout << testCase.first << " and " << testCase.second << std::endl;
        
        // GET RESULT
        isAnagram = solution.isAnagram(testCase.first, testCase.second);

        // PRINT RESULT
        if (isAnagram == true)
            std::cout << "[RESULT]\t: STRINGS ARE ANAGRAMS" << std::endl;
        else if (isAnagram == false)
            std::cout << "[RESULT]\t: STRINGS ARE NOT ANAGRAMS" << std::endl;
        
        std::cout << std::endl;
    }

    return (0);
}
