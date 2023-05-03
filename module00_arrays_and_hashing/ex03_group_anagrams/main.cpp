#include "./Solution.hpp"

int main()
{
    // VARIABLES DECLARATION
    Solution                                solution;
    std::vector< std::vector<std::string> > answer;
    
    // CREATE A VECTOR OF PAIRS TO BE TESTED
    // std::vector<std::string> test_strs = {"eat","tea","tan","ate","nat","bat"};
    // std::vector<std::string> test_strs = {"",""};
    // std::vector<std::string> test_strs = {"","b"};
    // std::vector<std::string> test_strs = {"","", ""};
    std::vector<std::string> test_strs = {"stop","pots","reed","","tops","deer","opts",""};


    // GET ANSWER
    answer = solution.groupAnagrams(test_strs);

    // PRINT ANSWER
    std::cout << "[ ";
    for(int i = 0; i < answer.size(); i ++)
    {
        std::cout << "[ ";
        for(int j = 0; j < answer[i].size(); j++)
        {
            std::cout << "\"" << answer[i][j] << "\"";
            if (answer[i].size() - 1 != j)
                std::cout << ", ";
        }
        if (answer.size() - 1 != i)
        {
            std::cout << " ]";
            std::cout << ", ";
        } 
        if (answer.size() - 1 == i)
            std::cout << " ]";
    }
    std::cout << " ]" << std::endl;
}