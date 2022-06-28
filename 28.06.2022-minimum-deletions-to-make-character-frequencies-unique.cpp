//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/
//submission link: https://leetcode.com/submissions/detail/733680271/

class Solution {
public:
    int minDeletions(string s) {
        int n=s.size();
        unordered_map<char,int> myMap;
        for(int i=0; i<n; i++)
            myMap[s[i]]++;
        int ans=0;
        
        set<int>mySet;
        
        for (auto[k,v] : myMap)
        {
            while(mySet.find(v)!=mySet.end())
            {
                v--;
                ans++;
            }
            if(v>0)
                mySet.insert(v); 
        }
        return ans;
    }
};
