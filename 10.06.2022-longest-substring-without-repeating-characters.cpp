//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
//submission link: https://leetcode.com/submissions/detail/718880973/

//->  https://www.youtube.com/watch?v=qtVh-XEpsJo

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //slidding window, i thought i could solve this with normal hashmap, but it gives problem in the type testcase 3
        if (s.length()==0)
            return 0;
        int ans=0;
        int l=0;
        int r=0;
        set<char> mySet;
        while (r<s.length())
        {
            if (mySet.find(s[r])==mySet.end())
            {
                mySet.insert(s[r]);
                r++;
                ans=max(ans, r-l);
            }
            else
            {
                mySet.erase(s[l]);    //note: why erase the left char when we found repeatation in right char-> check strivers vdo
                l++;
            }
        }
        return ans;
    }
};
