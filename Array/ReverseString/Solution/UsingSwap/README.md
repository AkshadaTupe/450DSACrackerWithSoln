# Approach

**Initialization:**

Two pointers, **left** and **right**, are initialized to the start and end of the string respectively.

**Reversal:**

The function enters a loop where characters at **left** and **right** positions are swapped until **left** is less than **right**. This effectively reverses the string in-place.

**Returning Result:** 

Finally, the reversed string is returned.

# Complexity
**- Time complexity : O(N)**
where N is the length of the input string. This is because the function iterates through half of the string length while swapping characters.

**- Space complexity : O(1)**
because the function only uses a constant amount of extra space regardless of the size of the input string. The input string is modified in-place, and no additional data structures are used.

# Code
class Solution
{
    public:
	string reverseWord(string str)
    {
        int left = 0;
        int right = str.length()-1;
        
        while(left < right)
        {
            std::swap(str[left],str[right]);
            left++;
            right--;
        }
        return str;
    }
    
};
```
