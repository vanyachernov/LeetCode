### Two Sum

Given an array of integers <strong>nums</strong> and an integer <strong>target</strong>, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

<strong>Example 1:</strong>

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

<strong>Example 2:</strong>

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

<strong>First Solution:</strong>
 
```C++
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
```