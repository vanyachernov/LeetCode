#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> result;
        bool checker = false;
        for(int i = 0; i < nums.size(); i++) 
        {
            for(int j = 1; j < nums.size(); j++)
                if(nums[i] + nums[j] == target && i != j)
                {
                    result.push_back(i);
                    result.push_back(j);
                    checker = true;
                    break;
                }
            if(checker)
                break;
        }
        return result;
    }
};

int main()
{
    Solution solution;
    const int target = 10;
    vector<int> numbers {2, 5, 5, 11};
    vector<int> result = solution.twoSum(numbers, target);

    cout << "Indexes: ";
    for(int i = 0; i < result.size(); i++)
        cout << setw(5) << result[i];
    return 0;
}