# Approach

**Initialization:**

The function first calculates the length of the input string.

**Reversal:**

It then initializes an empty string rev to store the reversed characters.

**Iterative Reversal:**

The function iterates over the characters of the input string in reverse order using a for loop. Starting from the last character (at index len - 1), it iterates until the first character (at index 0). In each iteration, it appends the current character to the end of the rev string using the push_back function.

**Returning Result:**

Finally, the reversed string rev is returned.

# Complexity
**- Time complexity : O(N)**
where N is the length of the input string. This is because the function iterates through half of the string length while swapping characters.

**- Space complexity : O(N)**
where N is the length of the input string. This is because the function creates a new string (rev) to store the reversed characters, and the space required for this string is proportional to the length of the input string.

# Code
class Solution
{
    public:
    string reverseWord(string str)
    {
        int len = str.length();
        
        string rev;
           
        for(int i = len-1;i>=0;i--)
        {
                rev.push_back(str[i]);
        }
     
        return rev;
    }
    
};
```
