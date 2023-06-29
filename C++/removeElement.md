### Remove Element

Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
<i>Return k.</i>

<strong>First Solution:</strong>

```C++
class Solution 
{
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int k = 0;
        auto it = std::remove(nums.begin(), nums.end(), val);
        nums.erase(it, nums.end());
        for(int l = 0; l < nums.size(); l++)
            if(nums[l] != val)
                k++;
        return k;
    }
};
```