#include "./Solution.hpp"

int main()
{
    // VARIABLES DECLARATION
    Solution         solution;
    std::vector<int> result;

    // FILLING A TABLE OF VECTOR/INT PAIRS TO BE TESTED
    std::pair<std::vector<int>, int> testCases[] =
    {
        {{2, 7, 11, 15}, 9},
        {{3, 2, 4}, 6},
        {{3,3}, 6}
    };

    // TESTING LOOP
    for (auto& testCase : testCases)
    {
        // PRINT THE TESTED ARRAY
        std::string input_str = "[TEST]\t\t: Input array : [";
        for (auto& element : testCase.first)
        {
            input_str += std::to_string(element);
            input_str += ", ";
        }
        input_str[input_str.size() - 2] = ']';
        input_str[input_str.size() - 1] = ',';
        std::cout << input_str;
        std::cout << " Target : " << testCase.second << std::endl;

        // GET RESULT
        result = solution.twoSum(testCase.first, testCase.second);

        // PRINT RESULT
        std::string output_str = "[RESULT]\t: Output array : [";
        for (auto& element : result)
        {
            output_str += std::to_string(element);
            output_str += ", ";
        }
        output_str[output_str.size() - 2] = ']';
        std::cout << output_str << std::endl;

        std::cout << std::endl;
    }

    return (0);
}
