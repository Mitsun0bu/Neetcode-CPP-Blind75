#include "Solution.hpp"

int main()
{
    // VARIABLES DECLARATION
    Solution    solution;
    bool        containsDuplicate = false;

    // FILLING A VECTOR OF VECTORS TO BE TESTED
    const std::vector< const std::vector<int> > testCases =
    {
        {1, 2, 3, 1},
        {1, 2, 3, 4},
        {1, 1, 1, 3, 3, 4, 3, 2, 4, 2}
    };

    // TESTING LOOP
    for (const auto& testCase : testCases)
    {
        // PRINT THE TESTED ARRAY
        std::cout << "[TESTED ARRAY]\t: ";
        for (int num : testCase) 
            std::cout << num << " ";
        
        std::cout << std::endl;

        // GET RESULT
        containsDuplicate = solution.containsDuplicate(testCase);

        // PRINT RESULT
        if (containsDuplicate == true)
            std::cout << "[RESULT]\t: CONTAINS DUPLICATE" << std::endl;
        else if (containsDuplicate == false)
            std::cout << "[RESULT]\t: DOES NOT CONTAIN DUPLICATE" << std::endl;
        
        std::cout << std::endl;
    }

    return (0);
}
