//question link: https://leetcode.com/problems/longest-palindromic-substring/
//submission link: https://leetcode.com/submissions/detail/723907183/


class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length()<2)
            return s;
        int longest_len=1;
        int size=s.length();
        int start=0;
        int end=0;
        
        //odd
        for (int i=0; i<size-1; i++)
        {
            int left=i;
            int right=i;
            while (left>=0 and right<size and s[left]==s[right])
            {
                left--;
                right++;
            }
            int currLen=right-left-1;
            if (currLen>longest_len)
            {
                longest_len=currLen;
                start=left+1;
                end=right-1;
            }
        }
        
        //even
        for (int i=0; i<size-1; i++)
        {
            int left=i;
            int right=i+1;
            while (left>=0 and right<size and s[left]==s[right])
            {
                left--;
                right++;
            }
            int currLen=right-left-1;
            if (currLen>longest_len)
            {
                longest_len=currLen;
                start=left+1;
                end=right-1;
            }
        }
        return s.substr(start,longest_len);
    }
};
