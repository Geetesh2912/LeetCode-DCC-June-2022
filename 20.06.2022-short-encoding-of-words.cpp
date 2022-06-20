//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/short-encoding-of-words/
//submission link: https://leetcode.com/submissions/detail/726848431/

class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        //put all words in set to remove duplicates
        set<string> mySet1(words.begin(), words.end());
        set<string> mySet2(words.begin(), words.end());
        
        for (auto s: mySet1)
        {
            for (int i=1; i<s.length(); i++)       //check if substring of s is present already in mySet2 if present just remove it
            {
                mySet2.erase(s.substr(i));
            }
        }
        
        //now what left in set2 is our required encoded str but we also need to add a # to it so count no. of words in and add same no. of #
        
        int ans=0;
        for (auto x: mySet2)
        {
            ans=ans+x.size()+1;
        }
        return ans;
        
        
        /*
        set1=[time,me,bell]
        set2=[time,me,bell]
        
        for 'time'
            erase 'ime' 'me' 'e' from set2 if found
        for 'me'
            erase 'e' from set2 if found
        same for all words in set1
        
        now after this only left in set2=[time,bell]
        add 2 #s in them our encoding is done
        we need to only return length so size of words in set2 + #
        is our answer
        */
    }
};
