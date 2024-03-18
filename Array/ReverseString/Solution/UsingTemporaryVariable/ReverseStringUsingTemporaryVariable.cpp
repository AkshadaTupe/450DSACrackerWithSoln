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
