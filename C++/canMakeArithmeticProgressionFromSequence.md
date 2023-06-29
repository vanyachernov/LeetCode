### Can Make Arithmetic Progression From Sequence

A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return <i>false</i>.

<strong>First Solution:</strong>

```C++
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size() < 2)
            return false;
        sort(arr.begin(), arr.end());
        int d = arr[1] - arr[0];
        bool status = true;
        for (int i = 1; i < arr.size(); i++)
            if (arr[i] - arr[i - 1] != d)
                status = false;
        return status;
    }
};
```