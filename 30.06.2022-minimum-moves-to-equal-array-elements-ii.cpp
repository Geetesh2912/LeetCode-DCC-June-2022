//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
//submission link: https://leetcode.com/submissions/detail/735270086/

class Solution {
public:
    int minMoves2(vector<int>& nums) 
    {
        int ans_moves=0;
        int len=nums.size();
        sort(nums.begin(), nums.end());
        
        int mid_element=nums[len/2];
        
        for(int i=0; i<len; i++)
        {
            ans_moves += abs(nums[i]-mid_element);
        }
        return ans_moves;
    }
};
