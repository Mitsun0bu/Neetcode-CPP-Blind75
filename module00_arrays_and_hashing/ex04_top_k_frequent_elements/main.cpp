#include "./Solution.hpp"

int main()
{
    // VARIABLES DECLARATION
    Solution            solution;
    std::vector<int>    answer;
    
    // CREATE A VECTOR OF PAIRS TO BE TESTED
    // std::vector<int> test_nums = {1,1,1,2,2,3};
    // std::vector<int> test_nums = {3,0,1,0};
    std::vector<int> test_nums = {4,1,-1,2,-1,2,3};

    // GET ANSWER
    answer = solution.topKFrequent(test_nums, 2);

    // PRINT ANSWER
    std::cout << "[";
    for (auto it = answer.begin() ;  it != answer.end(); it++)
    {
        if(it != answer.end()-1)
            std::cout << *it << ",";
        else
            std::cout << *it;
    }
    std::cout << "]" << std::endl;
}