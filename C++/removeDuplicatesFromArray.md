### Remove Duplicates from Sorted Array

Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

<strong>First Solution:</strong>

```C++
class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        vector<int>::iterator iterator = nums.begin();
        unordered_set<int> s;
        for(auto curr = nums.begin(); curr != nums.end(); ++curr)
            if(s.insert(*curr).second)
                *iterator++ = *curr;
        nums.erase(iterator, nums.end());
        int k = nums.size();
        return k;
    }
};
```