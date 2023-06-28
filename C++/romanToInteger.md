### Roman To Integer

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

```
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
```

For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

<ul style="list-style-type: square;">
<li>I can be placed before V (5) and X (10) to make 4 and 9.</li>
<li>X can be placed before L (50) and C (100) to make 40 and 90.</li>
<li>C can be placed before D (500) and M (1000) to make 400 and 900.</li>
</ul>

Given a roman numeral, convert it to an integer.

<strong>Example 1:</strong>

Input: s = "III"
Output: 3
Explanation: III = 3.

<strong>Example 2:</strong>

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.

<strong>Example 3:</strong>

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

<strong>First Solution:</strong>

```C++
class Solution 
{
public:
    int romanToInt(string s) 
    {
        int temp = 0;
        unordered_map <char, int> data 
        {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        for(int i = 0; i < s.size(); i++)
            temp = (data[s[i]] < data[s[i + 1]]) ? temp - data[s[i]] : temp + data[s[i]];
        return temp;
    }
};
```