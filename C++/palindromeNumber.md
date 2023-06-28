### Palindrome Number

Given an integer <strong>x</strong>, return <strong>true</strong> if <strong>x</strong> is a <strong><i>palindrome</i></strong>, and false otherwise.

<strong>Example 1:</strong>

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

<strong>Example 2:</strong>

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

<strong>Example 3:</strong>

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

<strong>First Solution:</strong>

```C++
class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        if(x < 0)
            return false;
        long long int n = 0, temp = x;
        while(temp > 0)
        {
            n = n * 10 + temp % 10;
            temp /= 10;
        }
        return x == n;
    }
};
```