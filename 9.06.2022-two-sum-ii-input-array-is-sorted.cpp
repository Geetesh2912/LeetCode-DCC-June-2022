//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
//submission link: https://leetcode.com/submissions/detail/718076568/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //similar logic of Bsearch as used in water area tank question
        
        int lo=0;
        int hi=numbers.size()-1;
        vector<int> ans;
        while (lo<hi)
        {
            if (numbers[lo]+numbers[hi]==target)
            {   //sum found
                ans.push_back(lo+1);        //remember we need to add positions in ans not the elements
                ans.push_back(hi+1);
                return ans;
            }
            else if (numbers[lo]+numbers[hi] > target)
                hi--;
            else
                lo++;
        }
        return {};
    }
};
