//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/search-suggestions-system/
//submission link: https://leetcode.com/submissions/detail/726110340/

//very brute force
//sorting and checking each 

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());
        vector<vector<string>> ans;
        int n=products.size();
        string curr="";
        for (auto c: searchWord)
        {
            vector<string> temp;
            curr=curr+c;
            for (int i=0; i<n and temp.size()<3; i++)
            {
                string check=products[i];
                if ( (check.substr(0,curr.length())) == curr )
                    temp.push_back(check);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
